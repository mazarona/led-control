/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *
 -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Hw.h
 *       Module:  Mcu_Hw
 *
 *  Description:  header file for Registers definition
 *
 *********************************************************************************************************************/
#ifndef MCU_HW_H
#define MCU_HW_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct {
  uint32 VECACT : 8;
  uint32 : 3;
  uint32 RETBASE : 1;
  uint32 VECPEND : 7;
  uint32 : 2;
  uint32 ISRPEND : 1;
  uint32 ISRPRE : 1;
  uint32 : 1;
  uint32 PENDSTCLR : 1;
  uint32 PENDSTSET : 1;
  uint32 UNPENDSV : 1;
  uint32 PENDSV : 1;
  uint32 : 2;
  uint32 NMISET : 1;
} INTCTRL_BF;
typedef union {
  uint32 R;
  INTCTRL_BF B;
} INTCTRL_Tag;

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS 0xE000E000
/* NVIC Registers */
#define NVIC_BASE_ADDRESS (CORTEXM4_PERI_BASE_ADDRESS + 0x100)
#define NVIC_EN_OFFSET 0x0
#define NVIC_PRI_OFFSET 0x300
#define NVIC_BASE_EN_ADDRESS (NVIC_BASE_ADDRESS + NVIC_EN_OFFSET)
#define NVIC_BASE_PRI_ADDRESS (NVIC_BASE_ADDRESS + NVIC_PRI_OFFSET)
#define APINT *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDRESS + 0xD0C))
/* SYSTICK Registers */
#define SYSTICK_BASE_ADDRESS (CORTEXM4_PERI_BASE_ADDRESS + 0x010)
#define SCB_BASE_ADDRESS (CORTEXM4_PERI_BASE_ADDRESS + 0xD00)

#define APINT *((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDRESS + 0xD0C))
#define INTCTRL *((volatile INTCTRL_Tag *)(CORTEXM4_PERI_BASE_ADDRESS + 0xD04))

/* GPIO Registers */
#define GPIO_PORT_A_BASE_ADDRESS 0x40058000
#define GPIO_PORT_B_BASE_ADDRESS 0x40059000
#define GPIO_PORT_C_BASE_ADDRESS 0x4005A000
#define GPIO_PORT_D_BASE_ADDRESS 0x4005B000
#define GPIO_PORT_E_BASE_ADDRESS 0x4005C000
#define GPIO_PORT_F_BASE_ADDRESS 0x4005D000

#define GPIO_DATA_OFFSET 0x0
#define GPIO_DIR_OFFSET 0x400
#define GPIO_IS_OFFSET 0x404
#define GPIO_IBE_OFFSET 0x408
#define GPIO_IEV_OFFSET 0x40C
#define GPIO_IM_OFFSET 0x410
#define GPIO_RIS_OFFSET 0x414
#define GPIO_MIS_OFFSET 0x418
#define GPIO_ICR_OFFSET 0x41C
#define GPIO_AFSEL_OFFSET 0x420
#define GPIO_DR2R_OFFSET 0x500
#define GPIO_DR4R_OFFSET 0x504
#define GPIO_DR8R_OFFSET 0x508
#define GPIO_ODR_OFFSET 0x50C
#define GPIO_PUR_OFFSET 0x510
#define GPIO_PDR_OFFSET 0x514
#define GPIO_SLR_OFFSET 0x518
#define GPIO_DEN_OFFSET 0x51C
#define GPIO_LOCK_OFFSET 0x520
#define GPIO_CR_OFFSET 0x524
#define GPIO_AMSEL_OFFSET 0x528
#define GPIO_PCTL_OFFSET 0x52C
#define GPIO_ADCCTL_OFFSET 0x530
#define GPIO_DMACTL_OFFSET 0x534

#define GPIO_PERIPH_ID4_OFFSET 0xFD0
#define GPIO_PERIPH_ID5_OFFSET 0xFD4
#define GPIO_PERIPH_ID6_OFFSET 0xFD8
#define GPIO_PERIPH_ID7_OFFSET 0xFDC
#define GPIO_PERIPH_ID0_OFFSET 0xFE0
#define GPIO_PERIPH_ID1_OFFSET 0xFE4
#define GPIO_PERIPH_ID2_OFFSET 0xFE8
#define GPIO_PERIPH_ID3_OFFSET 0xFEC

/* GPIO Registers */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
#define GET_REG(Base, Offset) *((volatile uint32 *)(Base + Offset))

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

#endif /* MCU_HW_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 *********************************************************************************************************************/