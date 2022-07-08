#include "rlm3-base.h"
#include "Mock.hpp"


extern bool RLM3_IsIRQ()
{
	MOCK_CALL();
	MOCK_RETURN(bool);
}

extern bool RLM3_IsSchedulerRunning()
{
	MOCK_CALL();
	MOCK_RETURN(bool);
}
