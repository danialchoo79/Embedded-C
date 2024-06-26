#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint32_t *pClkCtrlReg = (uint32_t*)0x40023830;
	uint32_t *pPortDModeReg = (uint32_t*)0x40020C00;
	uint32_t *pPortDOutReg = (uint32_t*)0x40020C14;

	// 1. Enabke the Clock for GPIOD Peripheral in the AHB1ENR (Set the 3rd bit position)
	*pClkCtrlReg |= (1<<3);

	// 2. Configure the mode of the IO pin as output
	// a. Clear the 24th and 25th Bit Positions (CLEAR)
	*pPortDModeReg &= ~(3 << 24);

	// b. Make 24th Bit Position 1 (SET)
	*pPortDModeReg |= (1 << 24);

	while(1)
	{
		// 3. Set 12th Bit of the Output Data Regisrter to make I/O pin-12 High
		*pPortDOutReg |= (1 << 12);

		// Introduce the Small Human Observable Delay
		// This loop executes for 10k times
		for(uint32_t i=0; i<10000 ; i++);

		// Turn Off LED
		*pPortDOutReg &= ~(1 << 12);

		for(uint32_t i=0; i<10000 ; i++);

	}

}
