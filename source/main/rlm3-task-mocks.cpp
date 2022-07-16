#include "rlm3-task.h"
#include "Mock.hpp"


extern RLM3_Time RLM3_GetCurrentTime()
{
	MOCK_CALL();
	MOCK_RETURN(RLM3_Time);
}

extern void RLM3_Yield()
{
	MOCK_CALL();
}

extern void RLM3_Delay(RLM3_Time time_ms)
{
	MOCK_CALL(time_ms);
}

extern void RLM3_DelayUntil(RLM3_Time start_time, RLM3_Time delay)
{
	MOCK_CALL(start_time, delay);
}

extern RLM3_Task RLM3_GetCurrentTask()
{
	MOCK_CALL();
	MOCK_RETURN(RLM3_Task);
}

extern void RLM3_Give(RLM3_Task task)
{
	MOCK_CALL(task);
}

extern void RLM3_GiveFromISR(RLM3_Task task)
{
	MOCK_CALL(task);
}

extern void RLM3_Take()
{
	MOCK_CALL();
}

extern bool RLM3_TakeTimeout(RLM3_Time timeout_ms)
{
	MOCK_CALL(timeout_ms);
	MOCK_RETURN(bool);
}

extern bool RLM3_TakeUntil(RLM3_Time start_time, RLM3_Time delay)
{
	MOCK_CALL(start_time, delay);
	MOCK_RETURN(bool);
}

