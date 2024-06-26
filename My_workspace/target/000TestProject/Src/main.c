/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Danial C
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

/******************************************************************************
 * Target: STM32F407G-DISC
 * Processor: ARM Cortex-M4 w FPU
 * Crystal: 8MHz Crystal Oscillator
 * On-board Programmer and Debugger: ST-LINK/V2-A
 * Board Connection: Mini Type B USB
 * ***************************************************************************
 */

/*****************************************************************************
 * Compilation Stages
 *
 * 1. [Pre-processing Stage - all PP Directives will be resolved]
 *
 * 				main.c -> Complier -> main.i
 *
 * 2. [Code Generation Stage - Higher level language code statements
 * 							will be converted into processor
 * 							architectural level mnemonics]
 *
 * 				main.i -> Compiler -> main.s
 *
 * 3. [Assembler Stage - Assembly level mnemonics are converted into
 * 					  opcodes (machine codes for instructions) ]
 *
 * 				main.s -> Compiler -> main.o
 * **************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
    /* Loop forever */
	for(;;);
}
