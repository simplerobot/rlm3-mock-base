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

extern void RLM3_DebugOutput(uint8_t c)
{
	std::putchar(c);
}

extern bool RLM3_DebugOutputFromISR(uint8_t c)
{
	std::putchar(c);
	return true;
}
