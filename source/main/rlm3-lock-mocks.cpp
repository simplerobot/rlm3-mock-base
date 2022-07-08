#include "rlm3-lock.h"
#include "Mock.hpp"
#include "Assert.h"


extern void RLM3_SpinLock_Init(SpinLock* lock)
{
	MOCK_CALL();
}

extern void RLM3_SpinLock_Deinit(SpinLock* lock)
{
	MOCK_CALL();
}

extern void RLM3_SpinLock_Enter(SpinLock* lock)
{
	MOCK_CALL();
}

extern bool RLM3_SpinLock_Try(SpinLock* lock, size_t timeout_ms)
{
	MOCK_CALL(timeout_ms);
	MOCK_RETURN(bool);
}

extern void RLM3_SpinLock_Leave(SpinLock* lock)
{
	MOCK_CALL();
}

extern void RLM3_MutexLock_Init(MutexLock* lock)
{
	MOCK_CALL();
}

extern void RLM3_MutexLock_Deinit(MutexLock* lock)
{
	MOCK_CALL();
}

extern void RLM3_MutexLock_Enter(MutexLock* lock)
{
	MOCK_CALL();
}

extern bool RLM3_MutexLock_Try(MutexLock* lock, size_t timeout_ms)
{
	MOCK_CALL(timeout_ms);
	MOCK_RETURN(bool);
}

extern void RLM3_MutexLock_Leave(MutexLock* lock)
{
	MOCK_CALL();
}
