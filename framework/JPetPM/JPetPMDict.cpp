//
// File generated by rootcint at Wed Mar 12 14:21:52 2014

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME JPetPMDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "JPetPMDict.h"

#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"

// START OF SHADOWS

namespace ROOT {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOT
// END OF SHADOWS

namespace ROOT {
   void JPetPM_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void *new_JPetPM(void *p = 0);
   static void *newArray_JPetPM(Long_t size, void *p);
   static void delete_JPetPM(void *p);
   static void deleteArray_JPetPM(void *p);
   static void destruct_JPetPM(void *p);
   static void streamer_JPetPM(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JPetPM*)
   {
      ::JPetPM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JPetPM >(0);
      static ::ROOT::TGenericClassInfo 
         instance("JPetPM", ::JPetPM::Class_Version(), "./JPetPM.h", 8,
                  typeid(::JPetPM), DefineBehavior(ptr, ptr),
                  &::JPetPM::Dictionary, isa_proxy, 0,
                  sizeof(::JPetPM) );
      instance.SetNew(&new_JPetPM);
      instance.SetNewArray(&newArray_JPetPM);
      instance.SetDelete(&delete_JPetPM);
      instance.SetDeleteArray(&deleteArray_JPetPM);
      instance.SetDestructor(&destruct_JPetPM);
      instance.SetStreamerFunc(&streamer_JPetPM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JPetPM*)
   {
      return GenerateInitInstanceLocal((::JPetPM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::JPetPM*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
TClass *JPetPM::fgIsA = 0;  // static to hold class pointer

//______________________________________________________________________________
const char *JPetPM::Class_Name()
{
   return "JPetPM";
}

//______________________________________________________________________________
const char *JPetPM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetPM*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int JPetPM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetPM*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void JPetPM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetPM*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *JPetPM::Class()
{
   if (!fgIsA) fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetPM*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
void JPetPM::Streamer(TBuffer &R__b)
{
   // Stream an object of class JPetPM.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      void *ptr_fSide = (void*)&fSide;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fSide);
      R__b >> fID;
      R__b >> fHVset;
      R__b >> fHVopt;
      R__b.StreamObject(&(fHVgain),typeid(pair<float,float>));
      R__b.CheckByteCount(R__s, R__c, JPetPM::IsA());
   } else {
      R__c = R__b.WriteVersion(JPetPM::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << (Int_t)fSide;
      R__b << fID;
      R__b << fHVset;
      R__b << fHVopt;
      R__b.StreamObject(&(fHVgain),typeid(pair<float,float>));
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void JPetPM::ShowMembers(TMemberInspector &R__insp)
{
      // Inspect the data members of an object of class JPetPM.
      TClass *R__cl = ::JPetPM::IsA();
      if (R__cl || R__insp.IsA()) { }
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fSide", &fSide);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fID", &fID);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fHVset", &fHVset);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fHVopt", &fHVopt);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fHVgain", (void*)&fHVgain);
      R__insp.InspectMember("pair<float,float>", (void*)&fHVgain, "fHVgain.", false);
      TNamed::ShowMembers(R__insp);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_JPetPM(void *p) {
      return  p ? new(p) ::JPetPM : new ::JPetPM;
   }
   static void *newArray_JPetPM(Long_t nElements, void *p) {
      return p ? new(p) ::JPetPM[nElements] : new ::JPetPM[nElements];
   }
   // Wrapper around operator delete
   static void delete_JPetPM(void *p) {
      delete ((::JPetPM*)p);
   }
   static void deleteArray_JPetPM(void *p) {
      delete [] ((::JPetPM*)p);
   }
   static void destruct_JPetPM(void *p) {
      typedef ::JPetPM current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_JPetPM(TBuffer &buf, void *obj) {
      ((::JPetPM*)obj)->::JPetPM::Streamer(buf);
   }
} // end of namespace ROOT for class ::JPetPM

/********************************************************
* JPetPMDict.cpp
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableJPetPMDict();

extern "C" void G__set_cpp_environmentJPetPMDict() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("JPetPM.h");
  G__cpp_reset_tagtableJPetPMDict();
}
#include <new>
extern "C" int G__cpp_dllrevJPetPMDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* JPetPM */
static int G__JPetPMDict_183_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   JPetPM* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new JPetPM[n];
     } else {
       p = new((void*) gvp) JPetPM[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new JPetPM;
     } else {
       p = new((void*) gvp) JPetPM;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__JPetPMDictLN_JPetPM));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((const JPetPM*) G__getstructoffset())->getSide());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((const JPetPM*) G__getstructoffset())->getID());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((const JPetPM*) G__getstructoffset())->getHVset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((const JPetPM*) G__getstructoffset())->getHVopt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letdouble(result7, 102, (double) ((JPetPM*) G__getstructoffset())->getHVgain((JPetPM::GainNumber) G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      {
         pair<float,float>* pobj;
         pair<float,float> xobj = ((JPetPM*) G__getstructoffset())->getHVgain();
         pobj = new pair<float,float>(xobj);
         result7->obj.i = (long) ((void*) pobj);
         result7->ref = result7->obj.i;
         G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetPM*) G__getstructoffset())->setSide((JPetPM::Side) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetPM*) G__getstructoffset())->setID((int) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetPM*) G__getstructoffset())->setHVset((int) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetPM*) G__getstructoffset())->setHVopt((int) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetPM*) G__getstructoffset())->setHVgain((float) G__double(libp->para[0]), (float) G__double(libp->para[1]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_13(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetPM*) G__getstructoffset())->setHVgain(*(pair<float,float>*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_14(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) JPetPM::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) JPetPM::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) JPetPM::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_17(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      JPetPM::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_21(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetPM*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_22(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) JPetPM::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_23(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) JPetPM::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_24(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) JPetPM::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetPMDict_183_0_25(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) JPetPM::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__JPetPMDict_183_0_26(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   JPetPM* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new JPetPM(*(JPetPM*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__JPetPMDictLN_JPetPM));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef JPetPM G__TJPetPM;
static int G__JPetPMDict_183_0_27(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 1
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (JPetPM*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((JPetPM*) (soff+(sizeof(JPetPM)*i)))->~G__TJPetPM();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (JPetPM*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((JPetPM*) (soff))->~G__TJPetPM();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* JPetPM */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncJPetPMDict {
 public:
  G__Sizep2memfuncJPetPMDict(): p(&G__Sizep2memfuncJPetPMDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncJPetPMDict::*p)();
};

size_t G__get_sizep2memfuncJPetPMDict()
{
  G__Sizep2memfuncJPetPMDict a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceJPetPMDict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__JPetPMDictLN_JPetPM))) {
     JPetPM *G__Lderived;
     G__Lderived=(JPetPM*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__JPetPMDictLN_JPetPM),G__get_linked_tagnum(&G__JPetPMDictLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__JPetPMDictLN_JPetPM),G__get_linked_tagnum(&G__JPetPMDictLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableJPetPMDict() {

   /* Setting up typedef entry */
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__JPetPMDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JPetPMDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetPMDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JPetPMDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetPMDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__JPetPMDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JPetPMDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetPMDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JPetPMDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetPMDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* JPetPM */
static void G__setup_memvarJPetPM(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__JPetPMDictLN_JPetPM));
   { JPetPM *p; p=(JPetPM*)0x1000; if (p) { }
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__JPetPMDictLN_JPetPMcLcLSide),-1,-2,1,G__FastAllocString(2048).Format("kLeft=%lldLL",(long long)JPetPM::kLeft).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__JPetPMDictLN_JPetPMcLcLSide),-1,-2,1,G__FastAllocString(2048).Format("kRight=%lldLL",(long long)JPetPM::kRight).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__JPetPMDictLN_JPetPMcLcLGainNumber),-1,-2,1,G__FastAllocString(2048).Format("kFirst=%lldLL",(long long)JPetPM::kFirst).data(),0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__JPetPMDictLN_JPetPMcLcLGainNumber),-1,-2,1,G__FastAllocString(2048).Format("kSecond=%lldLL",(long long)JPetPM::kSecond).data(),0,(char*)NULL);
   G__memvar_setup((void*)0,105,0,0,G__get_linked_tagnum(&G__JPetPMDictLN_JPetPMcLcLSide),-1,-1,4,"fSide=",0,(char*)NULL);
   G__memvar_setup((void*)0,105,0,0,-1,-1,-1,4,"fID=",0,(char*)NULL);
   G__memvar_setup((void*)0,105,0,0,-1,-1,-1,4,"fHVset=",0,(char*)NULL);
   G__memvar_setup((void*)0,105,0,0,-1,-1,-1,4,"fHVopt=",0,(char*)NULL);
   G__memvar_setup((void*)0,117,0,0,G__get_linked_tagnum(&G__JPetPMDictLN_pairlEfloatcOfloatgR),-1,-1,4,"fHVgain=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__JPetPMDictLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarJPetPMDict() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncJPetPM(void) {
   /* JPetPM */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__JPetPMDictLN_JPetPM));
   G__memfunc_setup("JPetPM",528,G__JPetPMDict_183_0_1, 105, G__get_linked_tagnum(&G__JPetPMDictLN_JPetPM), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("getSide",709,G__JPetPMDict_183_0_2, 105, G__get_linked_tagnum(&G__JPetPMDictLN_JPetPMcLcLSide), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("getID",461,G__JPetPMDict_183_0_3, 105, -1, -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("getHVset",810,G__JPetPMDict_183_0_4, 105, -1, -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("getHVopt",817,G__JPetPMDict_183_0_5, 105, -1, -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("getHVgain",893,G__JPetPMDict_183_0_6, 102, -1, -1, 0, 1, 1, 1, 0, "i 'JPetPM::GainNumber' - 0 - nr", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("getHVgain",893,G__JPetPMDict_183_0_7, 117, G__get_linked_tagnum(&G__JPetPMDictLN_pairlEfloatcOfloatgR), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("setSide",721,G__JPetPMDict_183_0_8, 121, -1, -1, 0, 1, 1, 1, 0, "i 'JPetPM::Side' - 0 - side", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("setID",473,G__JPetPMDict_183_0_9, 121, -1, -1, 0, 1, 1, 1, 0, "i - - 0 - id", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("setHVset",822,G__JPetPMDict_183_0_10, 121, -1, -1, 0, 1, 1, 1, 0, "i - - 0 - set", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("setHVopt",829,G__JPetPMDict_183_0_11, 121, -1, -1, 0, 1, 1, 1, 0, "i - - 0 - opt", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("setHVgain",905,G__JPetPMDict_183_0_12, 121, -1, -1, 0, 2, 1, 1, 0, 
"f - - 0 - g1 f - - 0 - g2", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("setHVgain",905,G__JPetPMDict_183_0_13, 121, -1, -1, 0, 1, 1, 1, 0, "u 'pair<float,float>' - 11 - gain", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Class",502,G__JPetPMDict_183_0_14, 85, G__get_linked_tagnum(&G__JPetPMDictLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (TClass* (*)())(&JPetPM::Class) ), 0);
   G__memfunc_setup("Class_Name",982,G__JPetPMDict_183_0_15, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&JPetPM::Class_Name) ), 0);
   G__memfunc_setup("Class_Version",1339,G__JPetPMDict_183_0_16, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (Version_t (*)())(&JPetPM::Class_Version) ), 0);
   G__memfunc_setup("Dictionary",1046,G__JPetPMDict_183_0_17, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (void (*)())(&JPetPM::Dictionary) ), 0);
   G__memfunc_setup("IsA",253,(G__InterfaceMethod) NULL,85, G__get_linked_tagnum(&G__JPetPMDictLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TMemberInspector' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G__JPetPMDict_183_0_21, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - ClassDef_StreamerNVirtual_b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G__JPetPMDict_183_0_22, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&JPetPM::DeclFileName) ), 0);
   G__memfunc_setup("ImplFileLine",1178,G__JPetPMDict_183_0_23, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&JPetPM::ImplFileLine) ), 0);
   G__memfunc_setup("ImplFileName",1171,G__JPetPMDict_183_0_24, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&JPetPM::ImplFileName) ), 0);
   G__memfunc_setup("DeclFileLine",1152,G__JPetPMDict_183_0_25, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&JPetPM::DeclFileLine) ), 0);
   // automatic copy constructor
   G__memfunc_setup("JPetPM", 528, G__JPetPMDict_183_0_26, (int) ('i'), G__get_linked_tagnum(&G__JPetPMDictLN_JPetPM), -1, 0, 1, 1, 1, 0, "u 'JPetPM' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~JPetPM", 654, G__JPetPMDict_183_0_27, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncJPetPMDict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {
}

static void G__cpp_setup_global2() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalJPetPMDict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
  G__cpp_setup_global2();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {
}

static void G__cpp_setup_func13() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcJPetPMDict() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
  G__cpp_setup_func13();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__JPetPMDictLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__JPetPMDictLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__JPetPMDictLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__JPetPMDictLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__JPetPMDictLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__JPetPMDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__JPetPMDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JPetPMDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__JPetPMDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JPetPMDictLN_JPetPM = { "JPetPM" , 99 , -1 };
G__linked_taginfo G__JPetPMDictLN_JPetPMcLcLSide = { "JPetPM::Side" , 101 , -1 };
G__linked_taginfo G__JPetPMDictLN_JPetPMcLcLGainNumber = { "JPetPM::GainNumber" , 101 , -1 };
G__linked_taginfo G__JPetPMDictLN_pairlEfloatcOfloatgR = { "pair<float,float>" , 115 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableJPetPMDict() {
  G__JPetPMDictLN_TClass.tagnum = -1 ;
  G__JPetPMDictLN_TBuffer.tagnum = -1 ;
  G__JPetPMDictLN_TMemberInspector.tagnum = -1 ;
  G__JPetPMDictLN_TObject.tagnum = -1 ;
  G__JPetPMDictLN_TNamed.tagnum = -1 ;
  G__JPetPMDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__JPetPMDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JPetPMDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__JPetPMDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JPetPMDictLN_JPetPM.tagnum = -1 ;
  G__JPetPMDictLN_JPetPMcLcLSide.tagnum = -1 ;
  G__JPetPMDictLN_JPetPMcLcLGainNumber.tagnum = -1 ;
  G__JPetPMDictLN_pairlEfloatcOfloatgR.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableJPetPMDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_TClass);
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_TBuffer);
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_TObject);
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_TNamed);
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__JPetPMDictLN_JPetPM),sizeof(JPetPM),-1,61696,(char*)NULL,G__setup_memvarJPetPM,G__setup_memfuncJPetPM);
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_JPetPMcLcLSide);
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_JPetPMcLcLGainNumber);
   G__get_linked_tagnum_fwd(&G__JPetPMDictLN_pairlEfloatcOfloatgR);
}
extern "C" void G__cpp_setupJPetPMDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupJPetPMDict()");
  G__set_cpp_environmentJPetPMDict();
  G__cpp_setup_tagtableJPetPMDict();

  G__cpp_setup_inheritanceJPetPMDict();

  G__cpp_setup_typetableJPetPMDict();

  G__cpp_setup_memvarJPetPMDict();

  G__cpp_setup_memfuncJPetPMDict();
  G__cpp_setup_globalJPetPMDict();
  G__cpp_setup_funcJPetPMDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncJPetPMDict();
  return;
}
class G__cpp_setup_initJPetPMDict {
  public:
    G__cpp_setup_initJPetPMDict() { G__add_setup_func("JPetPMDict",(G__incsetup)(&G__cpp_setupJPetPMDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initJPetPMDict() { G__remove_setup_func("JPetPMDict"); }
};
G__cpp_setup_initJPetPMDict G__cpp_setup_initializerJPetPMDict;

