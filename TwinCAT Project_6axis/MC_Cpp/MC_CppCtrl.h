///////////////////////////////////////////////////////////////////////////////
// MC_CppCtrl.h

#ifndef __MC_CPPCTRL_H__
#define __MC_CPPCTRL_H__

#include <atlbase.h>
#include <atlcom.h>

#define MC_CPPDRV_NAME "MC_CPP"

#include "resource.h"       // main symbols
#include "MC_CppW32.h"
#include "TcBase.h"
#include "MC_CppClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CMC_CppCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CMC_CppCtrl, &CLSID_MC_CppCtrl>
	, public IMC_CppCtrl
	, public ITcOCFCtrlImpl<CMC_CppCtrl, CMC_CppClassFactory>
{
public:
	CMC_CppCtrl();
	virtual ~CMC_CppCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_MC_CPPCTRL)
DECLARE_NOT_AGGREGATABLE(CMC_CppCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CMC_CppCtrl)
	COM_INTERFACE_ENTRY(IMC_CppCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __MC_CPPCTRL_H__
