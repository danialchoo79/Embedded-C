/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	printf("Hello World\n");				// works over SWO pin (Serial Wire Output) of SWD (Serial Wire Debug) [ARM]
											// SWD has 3 pins - 2 for debug, 1 for Trace [Two-Wire Protocol]
											// Physical Layer of SWD consists of
											// 		- (a) SWDIO, bidirectional data line
											//		- (b) SWCLK, clock driven by host
											// SWD interface programs MCU internal flash, access to memory regions,
											// add breakpoints, stop/run CPU.
											// Serial Wire Viewer can be used for printf statements for debugging.
    /* Loop forever */
	for(;;);
}
