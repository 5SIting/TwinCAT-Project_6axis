///////////////////////////////////////////////////////////////////////////////
// Axis6.h
#pragma once

#include "MC_CppInterfaces.h"

class CAxis6 
	: public ITComObject
	, public ITcADI
	, public ITcWatchSource
///<AutoGeneratedContent id="InheritanceList">
	, public ITcCyclic
///</AutoGeneratedContent>
{
public:
	DECLARE_IUNKNOWN()
	DECLARE_IPERSIST(CID_MC_CppCAxis6)
	DECLARE_ITCOMOBJECT_LOCKOP()
	DECLARE_ITCADI()
	DECLARE_ITCWATCHSOURCE()
	DECLARE_OBJPARAWATCH_MAP()
	DECLARE_OBJDATAAREA_MAP()

	CAxis6();
	virtual	~CAxis6();


///<AutoGeneratedContent id="InterfaceMembers">
	// ITcCyclic
	virtual HRESULT TCOMAPI CycleUpdate(ITcTask* ipTask, ITcUnknown* ipCaller, ULONG_PTR context);

///</AutoGeneratedContent>

protected:
	DECLARE_ITCOMOBJECT_SETSTATE();

	HRESULT AddModuleToCaller();
	VOID RemoveModuleFromCaller();

	// Tracing
	CTcTrace m_Trace;

///<AutoGeneratedContent id="Members">
	TcTraceLevel m_TraceLevelMax;
	Axis6Parameter m_Parameter;
	Axis6Inputs m_Inputs;
	Axis6Outputs m_Outputs;
	ITcCyclicCallerInfoPtr m_spCyclicCaller;
///</AutoGeneratedContent>

	// TODO: Custom variable
	UINT m_counter;
};