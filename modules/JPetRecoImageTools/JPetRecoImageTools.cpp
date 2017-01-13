/**
 *  @copyright Copyright 2016 The J-PET Framework Authors. All rights reserved.
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may find a copy of the License in the LICENCE file.
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *  @file JPetRecoImageTools.cpp
 */

#include "./JPetRecoImageTools.h"
#include "../../JPetLoggerInclude.h"
#include <vector>
#include <utility>
#include <cmath>
#include <functional>
#include <cassert>
#include <memory>

JPetRecoImageTools::JPetRecoImageTools() {}

JPetRecoImageTools::~JPetRecoImageTools() {}

//nearest neighbour
double JPetRecoImageTools::nearestNeighbour2( int i, double y, std::function<double(int, int)>& func)
{
  int j = std::round(y);
  return func (i, j);
}

double JPetRecoImageTools::linear2(int i, double y, std::function<double(int, int)>& func)
{
  int j = std::round(y);
  double weight = std::abs(y - std::ceil(y));
  return (1 - weight) * func(i, j) + weight * func(i, j + 1);
}

double JPetRecoImageTools::nearestNeighbour(const Matrix2D& emissionMatrix, double a, double b,
    int center, int x, int y, bool sang)
{
  if (sang) {
    y = (int)std::round(a * x + b) + center;
    if (y >= 0 && y < (int) emissionMatrix[0].size())
      return emissionMatrix[x + center][y];
    else return 0;
  } else {
    x = (int)std::round(a * y + b) + center + 1; // not really know why need to +1 to x, but it works
    if (x >= 0 && x < (int)emissionMatrix.size())
      return emissionMatrix[x][y + center];
    else return 0;
  }
}

std::function<double(int, int)> JPetRecoImageTools::getValue(const Matrix2D& emissionMatrix)
{
  return [& emissionMatrix](int i, int j) {
    if (i >= 0 && i < (int) emissionMatrix[0].size() && j >= 0 && j < (int) emissionMatrix.size() ) {
      return emissionMatrix[i][j];
    } else {
      return 0;
    }
  };
}

std::function<double(int, int)> JPetRecoImageTools::getValue2(const Matrix2D& emissionMatrix)
{
  return [& emissionMatrix](int i, int j) {
    if (i >= 0 && i < (int) emissionMatrix[0].size() && j >= 0 && j < (int) emissionMatrix.size() ) {
      return emissionMatrix[j][i];
    } else {
      return 0;
    }
  };
}

double JPetRecoImageTools::linear3(std::function<double(int, int)>& matrixGet, double a, double b,
                                   int center, int i)
{
  //if (sang) {
  return linear2(i + center , a * i + b + center, matrixGet);
  //y = (int)std::round(a * x + b) + center;
  //double weight = std::abs((a * x + b) - std::ceil(a * x + b));
  //if (y >= 0 && y < (int)emissionMatrix[0].size()) {
  //return (1 - weight) * emissionMatrix[x + center][y] + weight * emissionMatrix[x + center][y + 1];
  //} else return 0;

  //} else {
  //return linear2(y + center, a * y + b + center , matrixGet);
  //x = (int)std::round(a * y + b) + center + 1; // not really know why need to +1 to x, but it works
  //double weight = std::abs((a * y + b) - std::ceil(a * y + b));
  //if (x >= 0 && x + 1 < (int)emissionMatrix.size()) {
  //if (weight == 0)
  //return emissionMatrix[x][y + center];
  //else
  //return (1 - weight) * emissionMatrix[x][y + center] + weight * emissionMatrix[x + 1][y + center];
  //} else return 0;
  //}
}

double JPetRecoImageTools::linear(const Matrix2D& emissionMatrix, double a, double b,
                                  int center, int x, int y, bool sang)
{
  if (sang) {
    y = (int)std::round(a * x + b) + center;
    double weight = std::abs((a * x + b) - std::ceil(a * x + b));
    if (y >= 0 && y < (int)emissionMatrix[0].size()) {
      return (1 - weight) * emissionMatrix[x + center][y] + weight * emissionMatrix[x + center][y + 1];
    } else return 0;
  } else {
    x = (int)std::round(a * y + b) + center + 1; // not really know why need to +1 to x, but it works
    double weight = std::abs((a * y + b) - std::ceil(a * y + b));
    if (x >= 0 && x + 1 < (int)emissionMatrix.size()) {
      if (weight == 0)
        return emissionMatrix[x][y + center];
      else
        return (1 - weight) * emissionMatrix[x][y + center] + weight * emissionMatrix[x + 1][y + center];
    } else return 0;
  }
}



JPetRecoImageTools::Matrix2DProj JPetRecoImageTools::sinogram(Matrix2D& emissionMatrix,
    int nViews, int nScans,
    double angleBeg, double angleEnd,
    InterpolationFunc2 interpolationFunction,
    RescaleFunc rescaleFunc,
    int minCutoff,
    int scaleFactor
                                                             )
{
  assert(emissionMatrix.size() > 0);
  assert(emissionMatrix.size() == emissionMatrix[0].size());
  assert(nViews > 0);
  assert(nScans > 0);
  assert(angleBeg < angleEnd);
  assert(minCutoff < scaleFactor);

  //create vector of size nViews, initialize it with vector of size nScans
  Matrix2DProj proj(nViews, std::vector<double>(nScans));

  float stepsize = (angleEnd - angleBeg) / nViews;
  assert(stepsize > 0); //maybe != 0 ?

  int viewIndex = 0;
  for (auto phi = angleBeg; phi < angleEnd; phi = phi + stepsize) {
    for (auto scanNumber = 0; scanNumber < nScans; scanNumber++) {
      proj[viewIndex][nScans - 1 - scanNumber] = JPetRecoImageTools::calculateProjection(emissionMatrix,
          phi, scanNumber, nScans,
          interpolationFunction);
    }
    viewIndex++;
  }

  rescaleFunc(proj, minCutoff, scaleFactor);
  return proj;
}

double JPetRecoImageTools::calculateProjection(Matrix2D& emissionMatrix, double phi, int scanNumber, int nScans,
    InterpolationFunc2& interpolationFunction)
{
  int N = scanNumber - nScans / 2;
  const int kInputMatrixSize = emissionMatrix.size();
  //if no. nScans is greater than the image width, then scale will be <1
  const double scale = kInputMatrixSize / nScans;
  const double kSin45or125deg = std::sqrt(2) / 2; /// sin(45) deg
  const double kEpsilon = 0.0000001;
  const double kDegToRad = M_PI / 180.;

  double sin = std::sin(phi * kDegToRad - M_PI / 2.);
  sin = setToZeroIfSmall(sin, kEpsilon);
  double cos = std::cos(phi * kDegToRad - M_PI / 2.);
  cos = setToZeroIfSmall(cos, kEpsilon);

  double a = 0.;
  double b = 0.;

  /// If the angle is between [0 to 45 ] or [125 to 180] w use y = a* x +b
  /// otherwise we use  x =a' * y + b'
  bool angleRange45To125 = std::abs(sin) > kSin45or125deg;
  double divided = 1.;
  std::function<double(int, int)> matrixGet;

  if (angleRange45To125) {
    assert(sin);
    a = -cos / sin;
    b = (N - cos - sin) / sin;
    b *= scale;
    matrixGet  = getValue(emissionMatrix);
    divided = std::abs(sin);
  } else {
    assert(cos);
    a = -sin / cos;
    b = (N - cos - sin) / cos;
    b *= scale;
    matrixGet  = getValue2(emissionMatrix);
    divided = std::abs(cos);
  }
  const int kMatrixCenter = emissionMatrix.size() / 2;
  double value = 0.;
  for (auto i = -kMatrixCenter; i < kMatrixCenter; i++) {
    value += interpolationFunction(i + kMatrixCenter , a * i + b + kMatrixCenter, matrixGet);
  }
  value /= divided;
  return value;
}

void JPetRecoImageTools::rescale(Matrix2DProj& matrix, double minCutoff, double rescaleFactor)
{

  double datamax = matrix[0][0];
  double datamin = matrix[0][0];
  for (unsigned int k = 0; k < matrix.size(); k++) {
    for (unsigned int j = 0; j < matrix[k].size(); j++) {
      ///Applying min Cutoff
      if (matrix[k][j] < minCutoff)
        matrix[k][j] = minCutoff;
      /// Finding the largest and the smallest element in the matrix.
      if (matrix[k][j] > datamax)
        datamax = matrix[k][j];
      if (matrix[k][j] < datamin)
        datamin = matrix[k][j];
    }
  }
  /// datamin represents the constant background factor.
  if ((datamax - datamin) == 0.) {
    WARNING("Maximum value in the matrix to rescale is 0. No rescaling performed.");
    return;
  }

  for (unsigned int k = 0; k < matrix.size(); k++) {
    for (unsigned int j = 0; j < matrix[0].size(); j++) {
      matrix[k][j] = (matrix[k][j] - datamin) * rescaleFactor / (datamax - datamin);
    }
  }
}
