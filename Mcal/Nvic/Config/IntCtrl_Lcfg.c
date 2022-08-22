/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  IntCtrl_Lcfg.c
 *        \brief
 *
 *      \details
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "../../../Lib/Std_Types.h"
#include "../Inc/IntCtrl_Types.h"
/* TODO : Should I change the type definitions for the config inside of this
file instead of inside IntCtrl_Types.h since It's not really a part of my driver
API... It's only used to config how my code behaves... I mean the user will
never use the type NVIC_CfgType in main when he includes my driver right??? The
purpose of this type is to configure the driver before building the project, It
will NEVER be used in main. Maybe in the future i seperate declared types for
config in a seperate Module_ConfigTypes.h*/

/**********************************************************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
const NVIC_CfgType NVIC_Cfg[] = {
    /*Interrupt Number | Group Priority | Sub-Groub Priority */
    {NVIC_GPIO_PORT_A, 0, 1},
    {NVIC_GPIO_PORT_B, 0, 2},
    {NVIC_GPIO_PORT_C, 0, 3},
};

/**********************************************************************************************************************
 *  END OF FILE: IntCtrl_Lcfg.c
 *********************************************************************************************************************/