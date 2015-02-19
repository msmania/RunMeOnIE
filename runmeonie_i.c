

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_runmeonieLib,0xE06F66E8,0x3A2E,0x45A1,0xBB,0x38,0xBF,0xFC,0xFE,0xA3,0x7E,0x25);


MIDL_DEFINE_GUID(IID, DIID__Drunmeonie,0x2B3AE6CB,0x34E5,0x4F1B,0x99,0xB7,0xB6,0x2E,0x5C,0x20,0x75,0xE8);


MIDL_DEFINE_GUID(IID, DIID__DrunmeonieEvents,0xB596F9A3,0x1FE2,0x48B0,0x95,0x10,0xA4,0xD4,0xD7,0x94,0x2D,0x6F);


MIDL_DEFINE_GUID(CLSID, CLSID_runmeonie,0x5C630378,0xA070,0x42A6,0xBF,0xD5,0xC7,0x46,0xF7,0xDC,0xAA,0xCC);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



