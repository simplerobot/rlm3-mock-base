#include "rlm3-atomic.h"
#include "Mock.hpp"


extern bool RLM3_Atomic_SetBool(volatile bool* value)
{
	MOCK_CALL(*value);
	MOCK_RETURN(bool);
}

extern uint8_t RLM3_Atomic_Inc8(volatile uint8_t* value)
{
	MOCK_CALL(*value);
	MOCK_RETURN(uint8_t);
}

extern uint8_t RLM3_Atomic_Dec8(volatile uint8_t* value)
{
	MOCK_CALL(*value);
	MOCK_RETURN(uint8_t);
}

extern uint16_t RLM3_Atomic_Inc16(volatile uint16_t* value)
{
	MOCK_CALL(*value);
	MOCK_RETURN(uint16_t);
}

extern uint16_t RLM3_Atomic_Dec16(volatile uint16_t* value)
{
	MOCK_CALL(*value);
	MOCK_RETURN(uint16_t);
}

extern uint32_t RLM3_Atomic_Inc32(volatile uint32_t* value)
{
	MOCK_CALL(*value);
	MOCK_RETURN(uint32_t);
}

extern uint32_t RLM3_Atomic_Dec32(volatile uint32_t* value)
{
	MOCK_CALL(*value);
	MOCK_RETURN(uint32_t);
}

