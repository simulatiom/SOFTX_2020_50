//
// File generated by rootcint at Wed Mar 12 14:22:13 2014

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME JPetReaderDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "JPetReaderDict.h"

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
   void JPetReader_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void JPetReader_Dictionary();
   static void *new_JPetReader(void *p = 0);
   static void *newArray_JPetReader(Long_t size, void *p);
   static void delete_JPetReader(void *p);
   static void deleteArray_JPetReader(void *p);
   static void destruct_JPetReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JPetReader*)
   {
      ::JPetReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::JPetReader),0);
      static ::ROOT::TGenericClassInfo 
         instance("JPetReader", "./JPetReader.h", 20,
                  typeid(::JPetReader), DefineBehavior(ptr, ptr),
                  0, &JPetReader_Dictionary, isa_proxy, 0,
                  sizeof(::JPetReader) );
      instance.SetNew(&new_JPetReader);
      instance.SetNewArray(&newArray_JPetReader);
      instance.SetDelete(&delete_JPetReader);
      instance.SetDeleteArray(&deleteArray_JPetReader);
      instance.SetDestructor(&destruct_JPetReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JPetReader*)
   {
      return GenerateInitInstanceLocal((::JPetReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::JPetReader*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void JPetReader_Dictionary() {
      ::ROOT::GenerateInitInstanceLocal((const ::JPetReader*)0x0)->GetClass();
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_JPetReader(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::JPetReader : new ::JPetReader;
   }
   static void *newArray_JPetReader(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::JPetReader[nElements] : new ::JPetReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_JPetReader(void *p) {
      delete ((::JPetReader*)p);
   }
   static void deleteArray_JPetReader(void *p) {
      delete [] ((::JPetReader*)p);
   }
   static void destruct_JPetReader(void *p) {
      typedef ::JPetReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::JPetReader

/********************************************************
* JPetReaderDict.cpp
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

extern "C" void G__cpp_reset_tagtableJPetReaderDict();

extern "C" void G__set_cpp_environmentJPetReaderDict() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("JPetReader.h");
  G__cpp_reset_tagtableJPetReaderDict();
}
#include <new>
extern "C" int G__cpp_dllrevJPetReaderDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* JPetReader */
static int G__JPetReaderDict_529_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   JPetReader* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new JPetReader[n];
     } else {
       p = new((void*) gvp) JPetReader[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new JPetReader;
     } else {
       p = new((void*) gvp) JPetReader;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__JPetReaderDictLN_JPetReader));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetReaderDict_529_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   JPetReader* p = NULL;
   char* gvp = (char*) G__getgvp();
   //m: 1
   if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
     p = new JPetReader((const char*) G__int(libp->para[0]));
   } else {
     p = new((void*) gvp) JPetReader((const char*) G__int(libp->para[0]));
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__JPetReaderDictLN_JPetReader));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetReaderDict_529_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetReader*) G__getstructoffset())->CloseFile();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetReaderDict_529_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letLonglong(result7, 110, (G__int64) ((const JPetReader*) G__getstructoffset())->GetEntries());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetReaderDict_529_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((JPetReader*) G__getstructoffset())->GetEntry((int) G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetReaderDict_529_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 103, (long) ((JPetReader*) G__getstructoffset())->OpenFile((const char*) G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetReaderDict_529_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 1:
      ((JPetReader*) G__getstructoffset())->ReadData((const char*) G__int(libp->para[0]));
      G__setnull(result7);
      break;
   case 0:
      ((JPetReader*) G__getstructoffset())->ReadData();
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetReaderDict_529_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      {
         const TNamed& obj = ((JPetReader*) G__getstructoffset())->GetData();
         result7->ref = (long) (&obj);
         result7->obj.i = (long) (&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetReaderDict_529_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) ((JPetReader*) G__getstructoffset())->GetHeader());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef JPetReader G__TJPetReader;
static int G__JPetReaderDict_529_0_12(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 0
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (JPetReader*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((JPetReader*) (soff+(sizeof(JPetReader)*i)))->~G__TJPetReader();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (JPetReader*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((JPetReader*) (soff))->~G__TJPetReader();
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

/* JPetReader */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncJPetReaderDict {
 public:
  G__Sizep2memfuncJPetReaderDict(): p(&G__Sizep2memfuncJPetReaderDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncJPetReaderDict::*p)();
};

size_t G__get_sizep2memfuncJPetReaderDict()
{
  G__Sizep2memfuncJPetReaderDict a;
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
extern "C" void G__cpp_setup_inheritanceJPetReaderDict() {

   /* Setting up class inheritance */
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableJPetReaderDict() {

   /* Setting up typedef entry */
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetReaderDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetReaderDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetReaderDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetReaderDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<std::bidirectional_iterator_tag,TObject*,std::ptrdiff_t,const TObject**,const TObject*&>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,std::ptrdiff_t,const TObject**,const TObject*&>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,long>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("iterator<bidirectional_iterator_tag,TObject*,long,const TObject**>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<std::string,TObjArray*>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<string,TObjArray*>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<string,TObjArray*>",117,G__get_linked_tagnum(&G__JPetReaderDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("map<string,TObjArray*,less<string> >",117,G__get_linked_tagnum(&G__JPetReaderDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* JPetReader */
static void G__setup_memvarJPetReader(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__JPetReaderDictLN_JPetReader));
   { JPetReader *p; p=(JPetReader*)0x1000; if (p) { }
   G__memvar_setup((void*)0,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__JPetReaderDictLN_TBranch),-1,-1,2,"fBranch=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__JPetReaderDictLN_TNamed),-1,-1,2,"fObject=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__JPetReaderDictLN_TTree),-1,-1,2,"fTree=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__JPetReaderDictLN_TFile),-1,-1,2,"fFile=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarJPetReaderDict() {
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
static void G__setup_memfuncJPetReader(void) {
   /* JPetReader */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__JPetReaderDictLN_JPetReader));
   G__memfunc_setup("JPetReader",966,G__JPetReaderDict_529_0_1, 105, G__get_linked_tagnum(&G__JPetReaderDictLN_JPetReader), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("JPetReader",966,G__JPetReaderDict_529_0_2, 105, G__get_linked_tagnum(&G__JPetReaderDictLN_JPetReader), -1, 0, 1, 5, 1, 0, "C - - 10 - filename", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("CloseFile",886,G__JPetReaderDict_529_0_3, 121, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("GetEntries",1018,G__JPetReaderDict_529_0_4, 110, -1, -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("GetEntry",818,G__JPetReaderDict_529_0_5, 105, -1, -1, 0, 1, 1, 1, 0, "i - - 0 - entryNo", "/ the name of the function is bad but it mimics ROOT function ", (void*) NULL, 1);
   G__memfunc_setup("OpenFile",786,G__JPetReaderDict_529_0_6, 103, -1, -1, 0, 1, 1, 1, 0, "C - - 10 - filename", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ReadData",758,G__JPetReaderDict_529_0_7, 121, -1, -1, 0, 1, 1, 1, 0, "C - - 10 '\"\"' objname", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("GetData",666,G__JPetReaderDict_529_0_8, 117, G__get_linked_tagnum(&G__JPetReaderDictLN_TNamed), -1, 1, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("GetHeader",873,G__JPetReaderDict_529_0_9, 85, G__get_linked_tagnum(&G__JPetReaderDictLN_TObject), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("JPetReader",966,(G__InterfaceMethod) NULL, 105, G__get_linked_tagnum(&G__JPetReaderDictLN_JPetReader), -1, 0, 1, 1, 4, 0, "u 'JPetReader' - 11 - -", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod) NULL, 121, -1, -1, 0, 1, 1, 4, 0, "u 'JPetReader' - 10 - -", (char*)NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~JPetReader", 1092, G__JPetReaderDict_529_0_12, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncJPetReaderDict() {
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
}

static void G__cpp_setup_global3() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalJPetReaderDict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
  G__cpp_setup_global2();
  G__cpp_setup_global3();
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
}

static void G__cpp_setup_func14() {
}

static void G__cpp_setup_func15() {
}

static void G__cpp_setup_func16() {
}

static void G__cpp_setup_func17() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcJPetReaderDict() {
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
  G__cpp_setup_func14();
  G__cpp_setup_func15();
  G__cpp_setup_func16();
  G__cpp_setup_func17();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__JPetReaderDictLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__JPetReaderDictLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__JPetReaderDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__JPetReaderDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JPetReaderDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__JPetReaderDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JPetReaderDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR = { "iterator<bidirectional_iterator_tag,TObject*,long,const TObject**,const TObject*&>" , 115 , -1 };
G__linked_taginfo G__JPetReaderDictLN_TTree = { "TTree" , 99 , -1 };
G__linked_taginfo G__JPetReaderDictLN_TFile = { "TFile" , 99 , -1 };
G__linked_taginfo G__JPetReaderDictLN_TBranch = { "TBranch" , 99 , -1 };
G__linked_taginfo G__JPetReaderDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR = { "map<string,TObjArray*,less<string>,allocator<pair<const string,TObjArray*> > >" , 99 , -1 };
G__linked_taginfo G__JPetReaderDictLN_JPetReader = { "JPetReader" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableJPetReaderDict() {
  G__JPetReaderDictLN_TObject.tagnum = -1 ;
  G__JPetReaderDictLN_TNamed.tagnum = -1 ;
  G__JPetReaderDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__JPetReaderDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JPetReaderDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__JPetReaderDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JPetReaderDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR.tagnum = -1 ;
  G__JPetReaderDictLN_TTree.tagnum = -1 ;
  G__JPetReaderDictLN_TFile.tagnum = -1 ;
  G__JPetReaderDictLN_TBranch.tagnum = -1 ;
  G__JPetReaderDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR.tagnum = -1 ;
  G__JPetReaderDictLN_JPetReader.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableJPetReaderDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_TObject);
   G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_TNamed);
   G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR);
   G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_TTree);
   G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_TFile);
   G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_TBranch);
   G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__JPetReaderDictLN_JPetReader),sizeof(JPetReader),-1,36608,(char*)NULL,G__setup_memvarJPetReader,G__setup_memfuncJPetReader);
}
extern "C" void G__cpp_setupJPetReaderDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupJPetReaderDict()");
  G__set_cpp_environmentJPetReaderDict();
  G__cpp_setup_tagtableJPetReaderDict();

  G__cpp_setup_inheritanceJPetReaderDict();

  G__cpp_setup_typetableJPetReaderDict();

  G__cpp_setup_memvarJPetReaderDict();

  G__cpp_setup_memfuncJPetReaderDict();
  G__cpp_setup_globalJPetReaderDict();
  G__cpp_setup_funcJPetReaderDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncJPetReaderDict();
  return;
}
class G__cpp_setup_initJPetReaderDict {
  public:
    G__cpp_setup_initJPetReaderDict() { G__add_setup_func("JPetReaderDict",(G__incsetup)(&G__cpp_setupJPetReaderDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initJPetReaderDict() { G__remove_setup_func("JPetReaderDict"); }
};
G__cpp_setup_initJPetReaderDict G__cpp_setup_initializerJPetReaderDict;

