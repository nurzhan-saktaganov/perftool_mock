#include "omp_dbg.h"

void DBG_Init(long *ThreadID){}

void DBG_Finalize(){}

void DBG_Get_Handle(long *StaticContextHandle, char* ContextString, long StringLength){}

void DBG_BeforeParallel (long *StaticContextHandle, long *ThreadID, int *NumThreadsResults, int *IfExprResult){}

void DBG_ParallelEvent (long *StaticContextHandle, long *ThreadID){}

void DBG_ParallelEventEnd (long *StaticContextHandle, long *ThreadID){}

void DBG_AfterParallel (long *StaticContextHandle, long *ThreadID){}

void DBG_BeforeOMPLoop(long *StaticContextHandle, long *ThreadID, long *Init, long *Last, long *Step, int *ChunkSize){}

void DBG_OMPIter(long *StaticContextHandle, long *ThreadID, long *Index){}

void DBG_AfterOMPLoop (long *StaticContextHandle, long *ThreadID){}

void DBG_BeforeSections (long *StaticContextHandle, long *ThreadID){}

void DBG_AfterSections(long *StaticContextHandle, long *ThreadID){}

void DBG_SectionEvent(long *StaticContextHandle1, long *ThreadID){}

void DBG_SectionEventEnd(long *StaticContextHandle1, long *ThreadID){}

void DBG_BeforeSingle (long *StaticContextHandle, long *ThreadID){}

void DBG_SingleEvent(long *StaticContextHandle, long *ThreadID){}

void DBG_SingleEventEnd(long *StaticContextHandle, long *ThreadID){}

void DBG_AfterSingle (long *StaticContextHandle, long *ThreadID){}

void DBG_BeforeWorkshare (long *StaticContextHandle, long *ThreadID){}

void DBG_AfterWorkshare(long *StaticContextHandle, long *ThreadID){}

void DBG_MasterBegin(long *StaticContextHandle, long *ThreadID){}

void DBG_MasterEnd(long *StaticContextHandle, long *ThreadID){}

void DBG_BeforeCritical (long *StaticContextHandle, long *ThreadID){}

void DBG_CriticalEvent(long *StaticContextHandle, long *ThreadID){}

void DBG_CriticalEventEnd(long *StaticContextHandle, long *ThreadID){}

void DBG_AfterCritical(long *StaticContextHandle, long *ThreadID){}

void DBG_BeforeBarrier(long *StaticContextHandle, long *ThreadID){}

void DBG_AfterBarrier(long *StaticContextHandle, long *ThreadID){}

void DBG_FlushEvent(long *StaticContextHandle, long *ThreadID){}

void DBG_FlushEventEnd(long *StaticContextHandle, long *ThreadID){}

void DBG_BeforeOrdered (long *StaticContextHandle, long *ThreadID){}

void DBG_OrderedEvent(long *StaticContextHandle, long *ThreadID){}

void DBG_AfterOrdered(long *StaticContextHandle, long *ThreadID){}

void DBG_ThreadPrivateEvent(long *StaticContextHandle, long *ThreadID){}

void DBG_RegVar(long *StaticContextHandle, long *ThreadID, void*pAddr){}

void DBG_RegArr(long *StaticContextHandle, long *ThreadID, long *ArrSize, void* pAddr){}

void DBG_RegCommon(long *StaticContextHandle, long *ThreadID){}

void DBG_ReadVar(long* StaticContextHandle, long *ThreadID, void*pAddr, long *var_name){}

void DBG_ReadArr(long* StaticContextHandle, long *ThreadID, void*pAddr, long *var_name, void*pBase){}

void DBG_WriteVarBegin(long *StaticContextHandle, long *ThreadID, void*pAddr, long* var_name){}

void DBG_WriteArrBegin(long *StaticContextHandle, long *ThreadID, void*pAddr, long* var_name, void*pBase){}

void DBG_WriteEnd(long* StaticContextHandle, long *ThreadID, void*pAddr, long* var_name){}

void DBG_BegSL(long *StaticContextHandle, long *ThreadID, long *Init, long *Last, long *Step){}

void DBG_SIter(long *StaticContextHandle, long *ThreadID, long *Index){}

void DBG_EndSL(long *StaticContextHandle, long *ThreadID){}

void DBG_BeforeFuncCall(long *StaticContextHandle, long *ThreadID){}

void DBG_FuncParVar(long *StaticContextHandle, long *ThreadID, int *Position, void*pAddr, long *var_name, int *IsRead){}

void DBG_FuncParArr(long *StaticContextHandle, long *ThreadID, int *Position, void*pAddr, long *var_name, void*pBase, int *IsRead){}

void DBG_AfterFuncCall(long *StaticContextHandle, long *ThreadID){}

void DBG_FuncBegin(long *StaticContextHandle, long *ThreadID){}

void DBG_FuncEnd(long *StaticContextHandle, long *ThreadID){}

void DBG_RegParVar(long *StaticContextHandle, long *ThreadID, void*pAddr, int *Position){}

void DBG_RegParArr(long *StaticContextHandle, long *ThreadID, long *ArrSize, void*pAddr, int *Position){}

void DBG_SIfIter(long *StaticContextHandle, long *ThreadID, long *Index, long *IfVar){}

void DBG_OMPIfIter(long *StaticContextHandle, long *ThreadID, long *Index, long *IfVar){}

void DBG_Type_Control(){}

long DBG_Get_Addr(void *VarPtr)
{
    return (long) VarPtr;
};

void DBG_BeforeIO(long *StaticContextHandle, long *ThreadID){}

void DBG_AfterIO(long *StaticContextHandle, long *ThreadID){}

void DBG_BeforeInterval (long *StaticContextHandle, long *ThreadID, long *IntervalIndex){}

void DBG_AfterInterval (long *StaticContextHandle, long *ThreadID, long *IntervalIndex){}
