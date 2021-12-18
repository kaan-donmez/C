#include "I2CInterface.h"

char ReadDataWithI2C (char registerAddress) {

	static char rxBuffer[1];

	HAL_I2C_Master_Transmit(I2CHANDLE, DEVICEADDRESS, registerAddress, DATASIZE, TIMEOUT);
	HAL_I2C_Master_Receive(I2CHANDLE, DEVICEADDRESS, rxBuffer, DATASIZE, TIMEOUT);

	return rxBuffer[0];
}
