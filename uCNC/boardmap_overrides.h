// This project is designed for the STM32F4 series microcontrollers, compatible with Blackpill and other STM32F4 boards.
#ifndef BOARDMAP_OVERRIDES_H
#define BOARDMAP_OVERRIDES_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "boardmap_reset.h"
#define MCU MCU_STM32F4X
#define KINEMATIC KINEMATIC_CARTESIAN
#define AXIS_COUNT 2
#define TOOL_COUNT 1
#define BAUDRATE 115200
#define BOARD_NAME "Kanooka CNC"
#define UART_PORT 1
#define ITP_TIMER 2
#define SERVO_TIMER 3
#define ONESHOT_TIMER 1
#define STEP0_BIT 1
#define STEP0_PORT A
#define STEP1_BIT 0
#define STEP1_PORT B
#define DIR0_BIT 9
#define DIR0_PORT A
#define DIR1_BIT 10
#define DIR1_PORT A
#define STEP0_EN_BIT 15
#define STEP0_EN_PORT A
#define STEP1_EN_BIT 5
#define STEP1_EN_PORT B
#define DOUT0_BIT 15
#define DOUT0_PORT B
#define DOUT1_BIT 10
#define DOUT1_PORT B
#define DOUT2_BIT 2
#define DOUT2_PORT A
#define DOUT3_BIT 3
#define DOUT3_PORT A
#define DOUT4_BIT 13
#define DOUT4_PORT C
#define DOUT31_BIT 13
#define DOUT31_PORT C
#define LIMIT_X_BIT 12
#define LIMIT_X_PORT B
#define LIMIT_X_ISR
#define LIMIT_Y_BIT 13
#define LIMIT_Y_PORT B
#define LIMIT_Y_ISR
#define LIMIT_Z_BIT 14
#define LIMIT_Z_PORT B
#define LIMIT_Z_ISR
#define ESTOP_BIT 8
#define ESTOP_PORT B
#define ESTOP_ISR
#define SAFETY_DOOR_BIT 9
#define SAFETY_DOOR_PORT B
#define SAFETY_DOOR_ISR
#define FHOLD_BIT 15
#define FHOLD_PORT C
#define FHOLD_ISR
#define CS_RES_BIT 15
#define CS_RES_PORT C
#define CS_RES_ISR
#define ANALOG0_CHANNEL -1
#define ANALOG1_CHANNEL -1
#define ANALOG2_CHANNEL -1
#define ANALOG3_CHANNEL -1
#define ANALOG4_CHANNEL -1
#define ANALOG5_CHANNEL -1
#define ANALOG6_CHANNEL -1
#define ANALOG7_CHANNEL -1
#define ANALOG8_CHANNEL -1
#define ANALOG9_CHANNEL -1
#define ANALOG10_CHANNEL -1
#define ANALOG11_CHANNEL -1
#define ANALOG12_CHANNEL -1
#define ANALOG13_CHANNEL -1
#define ANALOG14_CHANNEL -1
#define ANALOG15_CHANNEL -1
#define TX_BIT 6
#define TX_PORT B
#define RX_BIT 7
#define RX_PORT B
#define USB_DM_BIT 11
#define USB_DM_PORT A
#define USB_DP_BIT 12
#define USB_DP_PORT A
//Custom configurations
#define RX_PULLUP 


#ifdef __cplusplus
}
#endif

#endif