//
// File generated by rootcint at Wed Mar 12 14:21:40 2014

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME JPetManagerDict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "JPetManagerDict.h"

#include "TCollectionProxyInfo.h"
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
   void JPetManager_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void delete_JPetManager(void *p);
   static void deleteArray_JPetManager(void *p);
   static void destruct_JPetManager(void *p);
   static void streamer_JPetManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JPetManager*)
   {
      ::JPetManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JPetManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("JPetManager", ::JPetManager::Class_Version(), "./JPetManager.h", 23,
                  typeid(::JPetManager), DefineBehavior(ptr, ptr),
                  &::JPetManager::Dictionary, isa_proxy, 0,
                  sizeof(::JPetManager) );
      instance.SetDelete(&delete_JPetManager);
      instance.SetDeleteArray(&deleteArray_JPetManager);
      instance.SetDestructor(&destruct_JPetManager);
      instance.SetStreamerFunc(&streamer_JPetManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JPetManager*)
   {
      return GenerateInitInstanceLocal((::JPetManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::JPetManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
TClass *JPetManager::fgIsA = 0;  // static to hold class pointer

//______________________________________________________________________________
const char *JPetManager::Class_Name()
{
   return "JPetManager";
}

//______________________________________________________________________________
const char *JPetManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int JPetManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
void JPetManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetManager*)0x0)->GetClass();
}

//______________________________________________________________________________
TClass *JPetManager::Class()
{
   if (!fgIsA) fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
void JPetManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class JPetManager.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b.StreamObject(&(fCmdParser),typeid(JPetCmdParser));
      R__b.StreamObject(&(fParamManager),typeid(JPetParamManager));
      {
         vector<JPetAnalysisModule*> &R__stl =  fTasks;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(JPetAnalysisModule));
         if (R__tcl1==0) {
            Error("fTasks streamer","Missing the TClass object for JPetAnalysisModule!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            JPetAnalysisModule* R__t;
            R__t = (JPetAnalysisModule*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      R__b.CheckByteCount(R__s, R__c, JPetManager::IsA());
   } else {
      R__c = R__b.WriteVersion(JPetManager::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b.StreamObject(&(fCmdParser),typeid(JPetCmdParser));
      R__b.StreamObject(&(fParamManager),typeid(JPetParamManager));
      {
         vector<JPetAnalysisModule*> &R__stl =  fTasks;
         int R__n=(&R__stl) ? int(R__stl.size()) : 0;
         R__b << R__n;
         if(R__n) {
            vector<JPetAnalysisModule*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void JPetManager::ShowMembers(TMemberInspector &R__insp)
{
      // Inspect the data members of an object of class JPetManager.
      TClass *R__cl = ::JPetManager::IsA();
      if (R__cl || R__insp.IsA()) { }
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fCmdParser", (void*)&fCmdParser);
      R__insp.InspectMember("JPetCmdParser", (void*)&fCmdParser, "fCmdParser.", false);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fParamManager", (void*)&fParamManager);
      R__insp.InspectMember("JPetParamManager", (void*)&fParamManager, "fParamManager.", false);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "fTasks", (void*)&fTasks);
      R__insp.InspectMember("vector<JPetAnalysisModule*>", (void*)&fTasks, "fTasks.", false);
      TNamed::ShowMembers(R__insp);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_JPetManager(void *p) {
      delete ((::JPetManager*)p);
   }
   static void deleteArray_JPetManager(void *p) {
      delete [] ((::JPetManager*)p);
   }
   static void destruct_JPetManager(void *p) {
      typedef ::JPetManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_JPetManager(TBuffer &buf, void *obj) {
      ((::JPetManager*)obj)->::JPetManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::JPetManager

namespace ROOT {
   void vectorlEJPetAnalysisModulemUgR_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void vectorlEJPetAnalysisModulemUgR_Dictionary();
   static void *new_vectorlEJPetAnalysisModulemUgR(void *p = 0);
   static void *newArray_vectorlEJPetAnalysisModulemUgR(Long_t size, void *p);
   static void delete_vectorlEJPetAnalysisModulemUgR(void *p);
   static void deleteArray_vectorlEJPetAnalysisModulemUgR(void *p);
   static void destruct_vectorlEJPetAnalysisModulemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<JPetAnalysisModule*>*)
   {
      vector<JPetAnalysisModule*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<JPetAnalysisModule*>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<JPetAnalysisModule*>", -2, "prec_stl/vector", 49,
                  typeid(vector<JPetAnalysisModule*>), DefineBehavior(ptr, ptr),
                  0, &vectorlEJPetAnalysisModulemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<JPetAnalysisModule*>) );
      instance.SetNew(&new_vectorlEJPetAnalysisModulemUgR);
      instance.SetNewArray(&newArray_vectorlEJPetAnalysisModulemUgR);
      instance.SetDelete(&delete_vectorlEJPetAnalysisModulemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEJPetAnalysisModulemUgR);
      instance.SetDestructor(&destruct_vectorlEJPetAnalysisModulemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<JPetAnalysisModule*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<JPetAnalysisModule*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlEJPetAnalysisModulemUgR_Dictionary() {
      ::ROOT::GenerateInitInstanceLocal((const vector<JPetAnalysisModule*>*)0x0)->GetClass();
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEJPetAnalysisModulemUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<JPetAnalysisModule*> : new vector<JPetAnalysisModule*>;
   }
   static void *newArray_vectorlEJPetAnalysisModulemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<JPetAnalysisModule*>[nElements] : new vector<JPetAnalysisModule*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEJPetAnalysisModulemUgR(void *p) {
      delete ((vector<JPetAnalysisModule*>*)p);
   }
   static void deleteArray_vectorlEJPetAnalysisModulemUgR(void *p) {
      delete [] ((vector<JPetAnalysisModule*>*)p);
   }
   static void destruct_vectorlEJPetAnalysisModulemUgR(void *p) {
      typedef vector<JPetAnalysisModule*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<JPetAnalysisModule*>

/********************************************************
* JPetManagerDict.cpp
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

extern "C" void G__cpp_reset_tagtableJPetManagerDict();

extern "C" void G__set_cpp_environmentJPetManagerDict() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("JPetManager.h");
  G__cpp_reset_tagtableJPetManagerDict();
}
#include <new>
extern "C" int G__cpp_dllrevJPetManagerDict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* JPetManager */
static int G__JPetManagerDict_216_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      {
         const JPetManager& obj = JPetManager::GetManager();
         result7->ref = (long) (&obj);
         result7->obj.i = (long) (&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetManager*) G__getstructoffset())->Init();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_3(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetManager*) G__getstructoffset())->Run();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetManager*) G__getstructoffset())->AddTask((JPetAnalysisModule*) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetManager*) G__getstructoffset())->ParseCmdLine((int) G__int(libp->para[0]), (char**) G__int(libp->para[1]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) ((JPetManager*) G__getstructoffset())->getInputFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      {
         const JPetParamManager& obj = ((JPetManager*) G__getstructoffset())->getParamManagerInstance();
         result7->ref = (long) (&obj);
         result7->obj.i = (long) (&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_8(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 85, (long) JPetManager::Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) JPetManager::Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 115, (long) JPetManager::Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      JPetManager::Dictionary();
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_15(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((JPetManager*) G__getstructoffset())->StreamerNVirtual(*(TBuffer*) libp->para[0].ref);
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_16(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) JPetManager::DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_17(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) JPetManager::ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_18(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 67, (long) JPetManager::ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JPetManagerDict_216_0_19(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) JPetManager::DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef JPetManager G__TJPetManager;
static int G__JPetManagerDict_216_0_23(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
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
       delete[] (JPetManager*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((JPetManager*) (soff+(sizeof(JPetManager)*i)))->~G__TJPetManager();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (JPetManager*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((JPetManager*) (soff))->~G__TJPetManager();
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

/* JPetManager */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncJPetManagerDict {
 public:
  G__Sizep2memfuncJPetManagerDict(): p(&G__Sizep2memfuncJPetManagerDict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncJPetManagerDict::*p)();
};

size_t G__get_sizep2memfuncJPetManagerDict()
{
  G__Sizep2memfuncJPetManagerDict a;
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
extern "C" void G__cpp_setup_inheritanceJPetManagerDict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__JPetManagerDictLN_JPetManager))) {
     JPetManager *G__Lderived;
     G__Lderived=(JPetManager*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__JPetManagerDictLN_JPetManager),G__get_linked_tagnum(&G__JPetManagerDictLN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__JPetManagerDictLN_JPetManager),G__get_linked_tagnum(&G__JPetManagerDictLN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableJPetManagerDict() {

   /* Setting up typedef entry */
   G__search_typename2("Version_t",115,-1,0,-1);
   G__setnewtype(-1,"Class version identifier (short)",0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<int>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlEintcOallocatorlEintgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlEintcOallocatorlEintgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlEintcOallocatorlEintgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<JPetAnalysisModule*>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_reverse_iteratorlEvectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JPetManagerDictLN_reverse_iteratorlEvectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* JPetManager */
static void G__setup_memvarJPetManager(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__JPetManagerDictLN_JPetManager));
   { JPetManager *p; p=(JPetManager*)0x1000; if (p) { }
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__JPetManagerDictLN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   G__memvar_setup((void*)0,117,0,0,G__get_linked_tagnum(&G__JPetManagerDictLN_JPetCmdParser),-1,-1,4,"fCmdParser=",0,(char*)NULL);
   G__memvar_setup((void*)0,117,0,0,G__get_linked_tagnum(&G__JPetManagerDictLN_JPetParamManager),-1,-1,4,"fParamManager=",0,(char*)NULL);
   G__memvar_setup((void*)0,117,0,0,G__get_linked_tagnum(&G__JPetManagerDictLN_vectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgR),G__defined_typename("vector<JPetAnalysisModule*>"),-1,4,"fTasks=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarJPetManagerDict() {
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
static void G__setup_memfuncJPetManager(void) {
   /* JPetManager */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__JPetManagerDictLN_JPetManager));
   G__memfunc_setup("GetManager",987,G__JPetManagerDict_216_0_1, 117, G__get_linked_tagnum(&G__JPetManagerDictLN_JPetManager), -1, 1, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (JPetManager& (*)())(&JPetManager::GetManager) ), 0);
   G__memfunc_setup("Init",404,G__JPetManagerDict_216_0_2, 121, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Run",309,G__JPetManagerDict_216_0_3, 121, -1, -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("AddTask",668,G__JPetManagerDict_216_0_4, 121, -1, -1, 0, 1, 1, 1, 0, "U 'JPetAnalysisModule' - 0 - mod", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("ParseCmdLine",1175,G__JPetManagerDict_216_0_5, 121, -1, -1, 0, 2, 1, 1, 0, 
"i - - 0 - argc C - - 2 - argv", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("getInputFileName",1617,G__JPetManagerDict_216_0_6, 67, -1, -1, 0, 0, 1, 1, 1, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("getParamManagerInstance",2337,G__JPetManagerDict_216_0_7, 117, G__get_linked_tagnum(&G__JPetManagerDictLN_JPetParamManager), -1, 1, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Class",502,G__JPetManagerDict_216_0_8, 85, G__get_linked_tagnum(&G__JPetManagerDictLN_TClass), -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (TClass* (*)())(&JPetManager::Class) ), 0);
   G__memfunc_setup("Class_Name",982,G__JPetManagerDict_216_0_9, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&JPetManager::Class_Name) ), 0);
   G__memfunc_setup("Class_Version",1339,G__JPetManagerDict_216_0_10, 115, -1, G__defined_typename("Version_t"), 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (Version_t (*)())(&JPetManager::Class_Version) ), 0);
   G__memfunc_setup("Dictionary",1046,G__JPetManagerDict_216_0_11, 121, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (void (*)())(&JPetManager::Dictionary) ), 0);
   G__memfunc_setup("IsA",253,(G__InterfaceMethod) NULL,85, G__get_linked_tagnum(&G__JPetManagerDictLN_TClass), -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("ShowMembers",1132,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TMemberInspector' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("Streamer",835,(G__InterfaceMethod) NULL,121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("StreamerNVirtual",1656,G__JPetManagerDict_216_0_15, 121, -1, -1, 0, 1, 1, 1, 0, "u 'TBuffer' - 1 - ClassDef_StreamerNVirtual_b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("DeclFileName",1145,G__JPetManagerDict_216_0_16, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&JPetManager::DeclFileName) ), 0);
   G__memfunc_setup("ImplFileLine",1178,G__JPetManagerDict_216_0_17, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&JPetManager::ImplFileLine) ), 0);
   G__memfunc_setup("ImplFileName",1171,G__JPetManagerDict_216_0_18, 67, -1, -1, 0, 0, 3, 1, 1, "", (char*)NULL, (void*) G__func2void( (const char* (*)())(&JPetManager::ImplFileName) ), 0);
   G__memfunc_setup("DeclFileLine",1152,G__JPetManagerDict_216_0_19, 105, -1, -1, 0, 0, 3, 1, 0, "", (char*)NULL, (void*) G__func2void( (int (*)())(&JPetManager::DeclFileLine) ), 0);
   G__memfunc_setup("JPetManager",1070,(G__InterfaceMethod) NULL, 105, G__get_linked_tagnum(&G__JPetManagerDictLN_JPetManager), -1, 0, 0, 1, 4, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("JPetManager",1070,(G__InterfaceMethod) NULL, 105, G__get_linked_tagnum(&G__JPetManagerDictLN_JPetManager), -1, 0, 1, 1, 4, 0, "u 'JPetManager' - 11 - -", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod) NULL, 121, -1, -1, 0, 1, 1, 4, 0, "u 'JPetManager' - 11 - -", (char*)NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~JPetManager", 1196, G__JPetManagerDict_216_0_23, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncJPetManagerDict() {
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
extern "C" void G__cpp_setup_globalJPetManagerDict() {
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
}

static void G__cpp_setup_func14() {
}

static void G__cpp_setup_func15() {
}

static void G__cpp_setup_func16() {
}

static void G__cpp_setup_func17() {
}

static void G__cpp_setup_func18() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcJPetManagerDict() {
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
  G__cpp_setup_func18();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__JPetManagerDictLN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_JPetAnalysisModule = { "JPetAnalysisModule" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_JPetCmdParser = { "JPetCmdParser" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_JPetParamManager = { "JPetParamManager" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_vectorlEintcOallocatorlEintgRsPgR = { "vector<int,allocator<int> >" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<int,allocator<int> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_JPetManager = { "JPetManager" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_vectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgR = { "vector<JPetAnalysisModule*,allocator<JPetAnalysisModule*> >" , 99 , -1 };
G__linked_taginfo G__JPetManagerDictLN_reverse_iteratorlEvectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<JPetAnalysisModule*,allocator<JPetAnalysisModule*> >::iterator>" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableJPetManagerDict() {
  G__JPetManagerDictLN_TClass.tagnum = -1 ;
  G__JPetManagerDictLN_TBuffer.tagnum = -1 ;
  G__JPetManagerDictLN_TMemberInspector.tagnum = -1 ;
  G__JPetManagerDictLN_TObject.tagnum = -1 ;
  G__JPetManagerDictLN_TNamed.tagnum = -1 ;
  G__JPetManagerDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__JPetManagerDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JPetManagerDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__JPetManagerDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JPetManagerDictLN_JPetAnalysisModule.tagnum = -1 ;
  G__JPetManagerDictLN_JPetCmdParser.tagnum = -1 ;
  G__JPetManagerDictLN_JPetParamManager.tagnum = -1 ;
  G__JPetManagerDictLN_vectorlEintcOallocatorlEintgRsPgR.tagnum = -1 ;
  G__JPetManagerDictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JPetManagerDictLN_JPetManager.tagnum = -1 ;
  G__JPetManagerDictLN_vectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgR.tagnum = -1 ;
  G__JPetManagerDictLN_reverse_iteratorlEvectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgRcLcLiteratorgR.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableJPetManagerDict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_TClass);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_TBuffer);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_TMemberInspector);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_TObject);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_TNamed);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_JPetAnalysisModule);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_JPetCmdParser);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_JPetParamManager);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_vectorlEintcOallocatorlEintgRsPgR);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_JPetManager),sizeof(JPetManager),-1,65280,(char*)NULL,G__setup_memvarJPetManager,G__setup_memfuncJPetManager);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_vectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgR);
   G__get_linked_tagnum_fwd(&G__JPetManagerDictLN_reverse_iteratorlEvectorlEJPetAnalysisModulemUcOallocatorlEJPetAnalysisModulemUgRsPgRcLcLiteratorgR);
}
extern "C" void G__cpp_setupJPetManagerDict(void) {
  G__check_setup_version(30051515,"G__cpp_setupJPetManagerDict()");
  G__set_cpp_environmentJPetManagerDict();
  G__cpp_setup_tagtableJPetManagerDict();

  G__cpp_setup_inheritanceJPetManagerDict();

  G__cpp_setup_typetableJPetManagerDict();

  G__cpp_setup_memvarJPetManagerDict();

  G__cpp_setup_memfuncJPetManagerDict();
  G__cpp_setup_globalJPetManagerDict();
  G__cpp_setup_funcJPetManagerDict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncJPetManagerDict();
  return;
}
class G__cpp_setup_initJPetManagerDict {
  public:
    G__cpp_setup_initJPetManagerDict() { G__add_setup_func("JPetManagerDict",(G__incsetup)(&G__cpp_setupJPetManagerDict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initJPetManagerDict() { G__remove_setup_func("JPetManagerDict"); }
};
G__cpp_setup_initJPetManagerDict G__cpp_setup_initializerJPetManagerDict;

