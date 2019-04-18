///////////////////////////////////////////////////////////////////////////////
// MC_CppDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "MC_CppDriver.h"
#include "MC_CppClassFactory.h"

DECLARE_GENERIC_DEVICE(MC_CPPDRV)

IOSTATUS CMC_CppDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CMC_CppClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CMC_CppDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CMC_CppDriver::MC_CPPDRV_GetVersion( )
{
	return( (MC_CPPDRV_Major << 8) | MC_CPPDRV_Minor );
}

