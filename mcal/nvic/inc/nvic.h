/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *
 -------------------------------------------------------------------------------------------------------------------
 *         File:  nvic.h
 *       Module:  NVIC
 *
 *  Description:  header file for Nvic Module
 *
 *********************************************************************************************************************/
#ifndef NVIC_H
#define NVIC_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "nvic_types.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
#define NVIC_ENABLE_ALL_INT() __asm("CPSIE i")
#define NVIC_DISABLE_ALL_INT() __asm("CPSID i")

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/******************************************************************************
 * \Syntax          : void Nvic_Init(void)
 * \Description     : initialize Nvic\SCB Module by parsing the Configuration
 *                    into Nvic\SCB registers
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value:   : None
 *******************************************************************************/
void Nvic_Init(void);

#endif /* NVIC_H */

/**********************************************************************************************************************
 *  END OF FILE: nvic.h
 *********************************************************************************************************************/
