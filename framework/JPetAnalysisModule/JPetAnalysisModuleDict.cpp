//
// File generated by rootcint at Wed Mar 12 14:21:27 2014

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME JPetAnalysisModuleDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "JPetAnalysisModuleDict.h"

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
   void JPetAnalysisModule_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void delete_JPetAnalysisModule(void *p);
   static void deleteArray_JPetAnalysisModule(void *p);
   static void destruct_JPetAnalysisModule(void *p);
   static void streamer_JPetAnalysisModule(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JPetAnalysisModule*)
   {
      ::JPetAnalysisModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JPetAnalysisModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("JPetAnalysisModule", ::JPetAnalysisModule::Class_Version(), "./JPetAnalysisModule.h", 13,
                  typeid(::JPetAnalysisModule), DefineBehavior(ptr, ptr),
                  &::JPetAnalysisModule::Dictionary, isa_proxy, 0,
                  sizeof(::JPetAnalysisModule) );
      instance.SetDelete(&delete_JPetAnalysisModule);
      instance.SetDeleteArray(&deleteArray_JPetAnalysisModule);
      instance.SetDestructor(&destruct_JPetAnalysisModule);
      instance.SetStreamerFunc(&streamer_JPetAnalysisModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JPetAnalysisModule*)
   {
      return GenerateInitInstanceLocal((::JPetAnalysisModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::JPetAnalysisModule*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
TClass *JPetAnalysisModule::fgIsA = 0;  // static to hold class pointer

//______________________________________________________________________________
const char *JPetAnalysisModule::Class_Name()
{
   return "JPetAnalysisModule";
}

//______________________________________________________________________________
const char *JPetAnalysisModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetAnalysisModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int JPetAnalysisModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetAnalysisModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void JPetAnalysisModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetAnalysisModule*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *JPetAnalysisModule::Class()
{
   if (!fgIsA) fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetAnalysisModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
void JPetAnalysisModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class JPetAnalysisModule.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, JPetAnalysisModule::IsA());
   } else {
      R__c = R__b.WriteVersion(JPetAnalysisModule::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void JPetAnalysisModule::ShowMembers(TMemberInspector &R__insp)
{
      // Inspect the data members of an object of class JPetAnalysisModule.
      TClass *R__cl = ::JPetAnalysisModule::IsA();
      if (R__cl || R__insp.IsA()) { }
      TNamed::ShowMembers(R__insp);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_JPetAnalysisModule(void *p) {
      delete ((::JPetAnalysisModule*)p);
   }
   static void deleteArray_JPetAnalysisModule(void *p) {
      delete [] ((::JPetAnalysisModule*)p);
   }
   static void destruct_JPetAnalysisModule(void *p) {
      typedef ::JPetAnalysisModule current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_JPetAnalysisModule(TBuffer &buf, void *obj) {
      ((::JPetAnalysisModule*)obj)->::JPetAnalysisModule::Streamer(buf);
   }
} // end of namespace ROOT for class ::JPetAnalysisModule

/********************************************************
* JPetAnalysisModuleDict.cpp
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

extern "C" void G__cpp_reset_tagtableJPetAnalysisModuleDict();

extern "C" void G__set_cpp_environmentJPetAnalysisModuleDict() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("JPetAnalysisModule.h");
  G__cpp_reset_tagtableJPetAnalysisModuleDict();
}
#include <new>
extern "C" int G__cpp_dllrevJPetAnalysisModuleDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* JPetAnalysisModule */
static int G__JPetAnalysisModuleDict_183_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 1:
      ((JPetAnalysisModule*) G__getstructoffset())->CreateInputObjects((const char*) G__int(libp->para[0]));
      G__setnull(result7);
      break;
   case 0:
      ((JPetAnalysisModule*) G__getstructoffset())->CreateInputObjects();
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   switch (libp->paran) {
   case 1:
      ((JPetAnalysisModule*) G__getstructoffset())->CreateOutputObjects((const char*) G__int(libp->para[0]));
      G__setnull(result7);
      break;
   case 0:
      ((JPetAnalysisModule*) G__getstructoffset())->CreateOutputObjects();
      G__setnull(result7);
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetAnalysisModule*) G__getstructoffset())->Exec();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letLonglong(result7, 110, (G__int64) ((JPetAnalysisModule*) G__getstructoffset())->GetEventNb());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetAnalysisModule*) G__getstructoffset())->Terminate();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) JPetAnalysisModule::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) JPetAnalysisModule::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) JPetAnalysisModule::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      JPetAnalysisModule::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetAnalysisModule*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) JPetAnalysisModule::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_17(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) JPetAnalysisModule::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_18(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) JPetAnalysisModule::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetAnalysisModuleDict_183_0_19(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) JPetAnalysisModule::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef JPetAnalysisModule G__TJPetAnalysisModule;
static int G__JPetAnalysisModuleDict_183_0_20(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
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
       delete[] (JPetAnalysisModule*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((JPetAnalysisModule*) (soff+(sizeof(JPetAnalysisModule)*i)))->~G__TJPetAnalysisModule();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (JPetAnalysisModule*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((JPetAnalysisModule*) (soff))->~G__TJPetAnalysisModule();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__JPetAnalysisModuleDict_183_0_21(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   JPetAnalysisModule* dest = (JPetAnalysisModule*) G__getstructoffset();
   *dest = *(JPetAnalysisModule*) libp->para[0].ref;
   const JPetAnalysisModule& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* JPetAnalysisModule */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncJPetAnalysisModuleDict {
 public:
  G__Sizep2memfuncJPetAnalysisModuleDict(): p(&G__Sizep2memfuncJPetAnalysisModuleDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncJPetAnalysisModuleDict::*p)();
};

size_t G__get_sizep2memfuncJPetAnalysisModuleDict()
{
  G__Sizep2memfuncJPetAnalysisModuleDict a;
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
extern "C" void G__cpp_setup_inheritanceJPetAnalysisModuleDict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_JPetAnalysisModule))) {
     JPetAnalysisModule *G__Lderived;
     G__Lderived=(JPetAnalysisModule*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_JPetAnalysisModule),G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_JPetAnalysisModule),G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableJPetAnalysisModuleDict() {

   /* Setting up typedef entry */
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* JPetAnalysisModule */
static void G__setup_memvarJPetAnalysisModule(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_JPetAnalysisModule));
   { JPetAnalysisModule *p; p=(JPetAnalysisModule*)0x1000; if (p) { }
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarJPetAnalysisModuleDict() {
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
static void G__setup_memfuncJPetAnalysisModule(void) {
   /* JPetAnalysisModule */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_JPetAnalysisModule));
   G__memfunc_setup("CreateInputObjects",1838,G__JPetAnalysisModuleDict_183_0_3, 121, -1, -1, 0, 1, 1, 1, 0, "C - - 10 '0' inputFilename", (char*)NULL, (void*) NULL, 3);
   G__memfunc_setup("CreateOutputObjects",1967,G__JPetAnalysisModuleDict_183_0_4, 121, -1, -1, 0, 1, 1, 1, 0, "C - - 10 '0' outputFilename", (char*)NULL, (void*) NULL, 3);
   G__memfunc_setup("Exec",389,G__JPetAnalysisModuleDict_183_0_5, 121, -1, -1, 0, 0, 1, 1, 0, "", "called for every event", (void*) NULL, 3);
   G__memfunc_setup("GetEventNb",978,G__JPetAnalysisModuleDict_183_0_6, 110, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 3);
   G__memfunc_setup("Terminate",937,G__JPetAnalysisModuleDict_183_0_7, 121, -1, -1, 0, 0, 1, 1, 0, "", "called once when analysis terminates ", (void*) NULL, 3);
   G__memfunc_setup("Class",502,G__JPetAnalysisModuleDict_183_0_8, 85, G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (TClass* (*)())(&JPetAnalysisModule::Class) ), 0);
   G__memfunc_setup("Class_Name",982,G__JPetAnalysisModuleDict_183_0_9, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&JPetAnalysisModule::Class_Name) ), 0);
   G__memfunc_setup("Class_Version",1339,G__JPetAnalysisModuleDict_183_0_10, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (Version_t (*)())(&JPetAnalysisModule::Class_Version) ), 0);
   G__memfunc_setup("Dictionary",1046,G__JPetAnalysisModuleDict_183_0_11, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (void (*)())(&JPetAnalysisModule::Dictionary) ), 0);
   G__memfunc_setup("IsA",253,(G__InterfaceMethod) NULL,85, G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TMemberInspector' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G__JPetAnalysisModuleDict_183_0_15, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - ClassDef_StreamerNVirtual_b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G__JPetAnalysisModuleDict_183_0_16, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&JPetAnalysisModule::DeclFileName) ), 0);
   G__memfunc_setup("ImplFileLine",1178,G__JPetAnalysisModuleDict_183_0_17, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&JPetAnalysisModule::ImplFileLine) ), 0);
   G__memfunc_setup("ImplFileName",1171,G__JPetAnalysisModuleDict_183_0_18, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&JPetAnalysisModule::ImplFileName) ), 0);
   G__memfunc_setup("DeclFileLine",1152,G__JPetAnalysisModuleDict_183_0_19, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&JPetAnalysisModule::DeclFileLine) ), 0);
   // automatic destructor
   G__memfunc_setup("~JPetAnalysisModule", 1947, G__JPetAnalysisModuleDict_183_0_20, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 1);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__JPetAnalysisModuleDict_183_0_21, (int) ('u'), G__get_linked_tagnum(&G__JPetAnalysisModuleDictLN_JPetAnalysisModule), -1, 1, 1, 1, 1, 0, "u 'JPetAnalysisModule' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncJPetAnalysisModuleDict() {
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
extern "C" void G__cpp_setup_globalJPetAnalysisModuleDict() {
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

extern "C" void G__cpp_setup_funcJPetAnalysisModuleDict() {
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
G__linked_taginfo G__JPetAnalysisModuleDictLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__JPetAnalysisModuleDictLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__JPetAnalysisModuleDictLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__JPetAnalysisModuleDictLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__JPetAnalysisModuleDictLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__JPetAnalysisModuleDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__JPetAnalysisModuleDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JPetAnalysisModuleDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__JPetAnalysisModuleDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JPetAnalysisModuleDictLN_JPetAnalysisModule = { "JPetAnalysisModule" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableJPetAnalysisModuleDict() {
  G__JPetAnalysisModuleDictLN_TClass.tagnum = -1 ;
  G__JPetAnalysisModuleDictLN_TBuffer.tagnum = -1 ;
  G__JPetAnalysisModuleDictLN_TMemberInspector.tagnum = -1 ;
  G__JPetAnalysisModuleDictLN_TObject.tagnum = -1 ;
  G__JPetAnalysisModuleDictLN_TNamed.tagnum = -1 ;
  G__JPetAnalysisModuleDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__JPetAnalysisModuleDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JPetAnalysisModuleDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__JPetAnalysisModuleDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JPetAnalysisModuleDictLN_JPetAnalysisModule.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableJPetAnalysisModuleDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__JPetAnalysisModuleDictLN_TClass);
   G__get_linked_tagnum_fwd(&G__JPetAnalysisModuleDictLN_TBuffer);
   G__get_linked_tagnum_fwd(&G__JPetAnalysisModuleDictLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G__JPetAnalysisModuleDictLN_TObject);
   G__get_linked_tagnum_fwd(&G__JPetAnalysisModuleDictLN_TNamed);
   G__get_linked_tagnum_fwd(&G__JPetAnalysisModuleDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__JPetAnalysisModuleDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__JPetAnalysisModuleDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__JPetAnalysisModuleDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__JPetAnalysisModuleDictLN_JPetAnalysisModule),sizeof(JPetAnalysisModule),-1,62725,(char*)NULL,G__setup_memvarJPetAnalysisModule,G__setup_memfuncJPetAnalysisModule);
}
extern "C" void G__cpp_setupJPetAnalysisModuleDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupJPetAnalysisModuleDict()");
  G__set_cpp_environmentJPetAnalysisModuleDict();
  G__cpp_setup_tagtableJPetAnalysisModuleDict();

  G__cpp_setup_inheritanceJPetAnalysisModuleDict();

  G__cpp_setup_typetableJPetAnalysisModuleDict();

  G__cpp_setup_memvarJPetAnalysisModuleDict();

  G__cpp_setup_memfuncJPetAnalysisModuleDict();
  G__cpp_setup_globalJPetAnalysisModuleDict();
  G__cpp_setup_funcJPetAnalysisModuleDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncJPetAnalysisModuleDict();
  return;
}
class G__cpp_setup_initJPetAnalysisModuleDict {
  public:
    G__cpp_setup_initJPetAnalysisModuleDict() { G__add_setup_func("JPetAnalysisModuleDict",(G__incsetup)(&G__cpp_setupJPetAnalysisModuleDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initJPetAnalysisModuleDict() { G__remove_setup_func("JPetAnalysisModuleDict"); }
};
G__cpp_setup_initJPetAnalysisModuleDict G__cpp_setup_initializerJPetAnalysisModuleDict;

