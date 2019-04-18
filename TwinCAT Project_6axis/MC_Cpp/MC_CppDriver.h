///////////////////////////////////////////////////////////////////////////////
// MC_CppDriver.h

#ifndef __MC_CPPDRIVER_H__
#define __MC_CPPDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define MC_CPPDRV_NAME        "MC_CPP"
#define MC_CPPDRV_Major       1
#define MC_CPPDRV_Minor       0

#define DEVICE_CLASS CMC_CppDriver

#include "ObjDriver.h"

class CMC_CppDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl MC_CPPDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(MC_CPPDRV)
	VxD_Service( MC_CPPDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __MC_CPPDRIVER_H__