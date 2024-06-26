/**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/
#include "main.h"
#include<stdint.h>

int main(void)
{
	RCC_AHB1ENR_t volatile *const pClkCtrl = (RCC_AHB1ENR_t*)0x40023830;
	GPIOx_MODE_t volatile *const pPortDModeReg = (GPIOx_MODE_t*)0x40020C00;
	GPIOx_ODR_t volatile *const pPortDOutReg = (GPIOx_ODR_t*)0x40020C14;

	//1. enable the clock for GPOID peripheral in the AHB1ENR (SET the 3rd bit position)
	pClkCtrl->gpiod_en = 1;

	//2. configure the mode of the IO pin as output
	pPortDModeReg->pin_12 = 1;

	while(1)
	{
		//3.SET 12th bit of the output data register to make I/O pin-12 as HIGH
		pPortDOutReg->pin_12 = 1;

		//introduce small human observable delay
		//This loop executes for 10K times
		for(uint32_t i=0 ; i < 300000 ; i++ );

		// Turn OFF the LED
		pPortDOutReg->pin_12 = 0;

		for(uint32_t i=0 ; i < 300000 ; i++ );
	}
}
