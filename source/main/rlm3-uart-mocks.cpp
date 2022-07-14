#include "rlm3-uart.h"
#include "Mock.hpp"


extern void RLM3_UART2_Init(uint32_t baud_rate)
{
	MOCK_CALL(baud_rate);
}

extern void RLM3_UART2_Deinit()
{
	MOCK_CALL();
}

extern bool RLM3_UART2_IsInit()
{
	MOCK_CALL();
	MOCK_RETURN(bool);
}

extern void RLM3_UART2_EnsureTransmit()
{
	MOCK_CALL();
}

extern void RLM3_UART4_Init(uint32_t baud_rate)
{
	MOCK_CALL(baud_rate);
}

extern void RLM3_UART4_Deinit()
{
	MOCK_CALL();
}

extern bool RLM3_UART4_IsInit()
{
	MOCK_CALL();
	MOCK_RETURN(bool);
}

extern void RLM3_UART4_EnsureTransmit()
{
	MOCK_CALL();
}

extern __attribute__((weak)) void RLM3_UART2_ReceiveCallback(uint8_t data)
{
	// DO NOT MODIFIY THIS FUNCTION.  Override it by declaring a non-weak version in your project files.
}

extern __attribute__((weak)) bool RLM3_UART2_TransmitCallback(uint8_t* data_to_send)
{
	// DO NOT MODIFIY THIS FUNCTION.  Override it by declaring a non-weak version in your project files.
	return false;
}

extern __attribute__((weak)) void RLM3_UART2_ErrorCallback(uint32_t status_flags)
{
	// DO NOT MODIFIY THIS FUNCTION.  Override it by declaring a non-weak version in your project files.
}

extern __attribute__((weak)) void RLM3_UART4_ReceiveCallback(uint8_t data)
{
	// DO NOT MODIFIY THIS FUNCTION.  Override it by declaring a non-weak version in your project files.
}

extern __attribute__((weak)) bool RLM3_UART4_TransmitCallback(uint8_t* data_to_send)
{
	// DO NOT MODIFIY THIS FUNCTION.  Override it by declaring a non-weak version in your project files.
	return false;
}

extern __attribute__((weak)) void RLM3_UART4_ErrorCallback(uint32_t status_flags)
{
	// DO NOT MODIFIY THIS FUNCTION.  Override it by declaring a non-weak version in your project files.
}

