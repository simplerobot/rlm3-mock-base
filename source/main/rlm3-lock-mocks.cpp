#include "rlm3-lock.h"
#include "Mock.hpp"
#include "Assert.h"


extern void RLM3_SpinLock_Init(RLM3_SpinLock* lock)
{
	MOCK_CALL();
}

extern void RLM3_SpinLock_Deinit(RLM3_SpinLock* lock)
{
	MOCK_CALL();
}

extern void RLM3_SpinLock_Enter(RLM3_SpinLock* lock)
{
	MOCK_CALL();
}

extern bool RLM3_SpinLock_Try(RLM3_SpinLock* lock, size_t timeout_ms)
{
	MOCK_CALL(timeout_ms);
	MOCK_RETURN(bool);
}

extern void RLM3_SpinLock_Leave(RLM3_SpinLock* lock)
{
	MOCK_CALL();
}

extern void RLM3_MutexLock_Init(RLM3_MutexLock* lock)
{
	MOCK_CALL();
}

extern void RLM3_MutexLock_Deinit(RLM3_MutexLock* lock)
{
	MOCK_CALL();
}

extern void RLM3_MutexLock_Enter(RLM3_MutexLock* lock)
{
	MOCK_CALL();
}

extern bool RLM3_MutexLock_Try(RLM3_MutexLock* lock, size_t timeout_ms)
{
	MOCK_CALL(timeout_ms);
	MOCK_RETURN(bool);
}

extern void RLM3_MutexLock_Leave(RLM3_MutexLock* lock)
{
	MOCK_CALL();
}
