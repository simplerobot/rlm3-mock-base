#include "rlm3-i2c.h"
#include "Mock.hpp"
#include <cstring>


extern void RLM3_I2C1_Init(RLM3_I2C1_DEVICE device)
{
	MOCK_CALL(device);
}

extern void RLM3_I2C1_Deinit(RLM3_I2C1_DEVICE device)
{
	MOCK_CALL(device);
}

extern bool RLM3_I2C1_IsInit(RLM3_I2C1_DEVICE device)
{
	MOCK_CALL(device);
	MOCK_RETURN(bool);
}

extern bool RLM3_I2C1_Transmit(uint32_t addr, const uint8_t* data, size_t size)
{
	MOCK_CALL(addr, MockData(data, size));
	MOCK_RETURN(bool);
}

extern bool RLM3_I2C1_Receive(uint32_t addr, uint8_t* data, size_t size)
{
	// TODO: How do we handle output parameters?
	MOCK_CALL(addr);
	MockData data_object(data, size);
	MOCK_OUTPUT(data_object);
	MOCK_RETURN(bool);
}

extern bool RLM3_I2C1_TransmitReceive(uint32_t addr, const uint8_t* tx_data, size_t tx_size, uint8_t* rx_data, size_t rx_size)
{
	// TODO: How do we handle output parameters?
	MOCK_CALL(addr, MockData(tx_data, tx_size));
	MockData data_object(rx_data, rx_size);
	MOCK_OUTPUT(data_object);
	MOCK_RETURN(bool);
}
