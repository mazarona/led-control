/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *
 -------------------------------------------------------------------------------------------------------------------
 *         File: gpio.h
 *       Module: gpio
 *
 *  Description:  API for the GPIO module
 *
 *********************************************************************************************************************/
#ifndef GPIO_H
#define GPIO_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "gpio_types.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

Gpio_LevelType Gpio_ReadChannel(Gpio_ChannelType channelId);
void Gpio_WriteChannel(Gpio_ChannelType channelId, Gpio_LevelType level);

Gpio_PortLevelType Gpio_ReadPort(Gpio_PortType portId);
void Gpio_WritePort(Gpio_PortType portId, Gpio_PortLevelType level);

Gpio_LevelType Gpio_FlipChannel(Gpio_ChannelType channelId);

#endif /* GPIO_H */

/**********************************************************************************************************************
 *  END OF FILE: gpio.h
 *********************************************************************************************************************/