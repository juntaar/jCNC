
#ifndef CNC_HAL_OVERRIDES_H
#define CNC_HAL_OVERRIDES_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "cnc_hal_reset.h"
#define S_CURVE_ACCELERATION_LEVEL 0
#define ENABLE_PIN_DEBUG_EXTRA_CMD
#define ENABLE_EXTRA_SETTINGS_CMDS
#define DISABLE_ALL_CONTROLS
#define DISABLE_ALL_LIMITS
#define PROBE_PULLUP_ENABLE
#define TOOL1 spindle_pwm
#define IC74HC595_COUNT 0
#define ENCODERS 0
#define ENABLE_MAIN_LOOP_MODULES
#define ENABLE_IO_MODULES
#define ENABLE_PARSER_MODULES
#define ENABLE_MOTION_CONTROL_MODULES
#define ENABLE_RT_SYNC_MOTIONS
//Custom configurations

#ifdef __cplusplus
}
#endif

#endif