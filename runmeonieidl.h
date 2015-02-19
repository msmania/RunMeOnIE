

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Feb 19 15:37:50 2015
 */
/* Compiler settings for runmeonie.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __runmeonieidl_h__
#define __runmeonieidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___Drunmeonie_FWD_DEFINED__
#define ___Drunmeonie_FWD_DEFINED__
typedef interface _Drunmeonie _Drunmeonie;

#endif 	/* ___Drunmeonie_FWD_DEFINED__ */


#ifndef ___DrunmeonieEvents_FWD_DEFINED__
#define ___DrunmeonieEvents_FWD_DEFINED__
typedef interface _DrunmeonieEvents _DrunmeonieEvents;

#endif 	/* ___DrunmeonieEvents_FWD_DEFINED__ */


#ifndef __runmeonie_FWD_DEFINED__
#define __runmeonie_FWD_DEFINED__

#ifdef __cplusplus
typedef class runmeonie runmeonie;
#else
typedef struct runmeonie runmeonie;
#endif /* __cplusplus */

#endif 	/* __runmeonie_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_runmeonie_0000_0000 */
/* [local] */ 

#pragma once
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_runmeonie_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_runmeonie_0000_0000_v0_0_s_ifspec;


#ifndef __runmeonieLib_LIBRARY_DEFINED__
#define __runmeonieLib_LIBRARY_DEFINED__

/* library runmeonieLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_runmeonieLib;

#ifndef ___Drunmeonie_DISPINTERFACE_DEFINED__
#define ___Drunmeonie_DISPINTERFACE_DEFINED__

/* dispinterface _Drunmeonie */
/* [uuid] */ 


EXTERN_C const IID DIID__Drunmeonie;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2B3AE6CB-34E5-4F1B-99B7-B62E5C2075E8")
    _Drunmeonie : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DrunmeonieVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _Drunmeonie * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _Drunmeonie * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _Drunmeonie * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _Drunmeonie * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _Drunmeonie * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _Drunmeonie * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _Drunmeonie * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DrunmeonieVtbl;

    interface _Drunmeonie
    {
        CONST_VTBL struct _DrunmeonieVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _Drunmeonie_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _Drunmeonie_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _Drunmeonie_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _Drunmeonie_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _Drunmeonie_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _Drunmeonie_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _Drunmeonie_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___Drunmeonie_DISPINTERFACE_DEFINED__ */


#ifndef ___DrunmeonieEvents_DISPINTERFACE_DEFINED__
#define ___DrunmeonieEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DrunmeonieEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DrunmeonieEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B596F9A3-1FE2-48B0-9510-A4D4D7942D6F")
    _DrunmeonieEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DrunmeonieEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DrunmeonieEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DrunmeonieEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DrunmeonieEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DrunmeonieEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DrunmeonieEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DrunmeonieEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DrunmeonieEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DrunmeonieEventsVtbl;

    interface _DrunmeonieEvents
    {
        CONST_VTBL struct _DrunmeonieEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DrunmeonieEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DrunmeonieEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DrunmeonieEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DrunmeonieEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DrunmeonieEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DrunmeonieEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DrunmeonieEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DrunmeonieEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_runmeonie;

#ifdef __cplusplus

class DECLSPEC_UUID("5C630378-A070-42A6-BFD5-C746F7DCAACC")
runmeonie;
#endif
#endif /* __runmeonieLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


