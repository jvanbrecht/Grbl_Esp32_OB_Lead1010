#pragma once
// clang-format off

/*
    lead_1010_openbuilds.h
    Part of Grbl_ESP32

    Pin assignments for a 4-axis machine using Triaminic drivers in 
    daisy-chained SPI mode.

    4 Stepper Motors - X YY Z
    PWM Controlled Spindle
    
    Based on 
    https://github.com/bdring/4_Axis_SPI_CNC

    2019    - Bart Dring
    2020    - Mitch Bradley

    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/

#define MACHINE_NAME "LEAD_1010_OPENBUILDS_XYZ"


#define N_AXIS 3

#define USE_I2S_OUT
#define USE_I2S_STEPS

#define TRINAMIC_RUN_MODE           TrinamicMode::CoolStep
#define TRINAMIC_HOMING_MODE        TrinamicMode::CoolStep


#define X_TRINAMIC_DRIVER       5160
#define X_DISABLE_PIN           I2SO(0)
#define X_DIRECTION_PIN         I2SO(1)
#define X_STEP_PIN              I2SO(2)
#define X_CS_PIN                I2SO(3)
#define X_RSENSE                TMC5160_RSENSE_DEFAULT

#define Y_TRINAMIC_DRIVER       5160
#define Y_DIRECTION_PIN         I2SO(4)
#define Y_STEP_PIN              I2SO(5)
#define Y_DISABLE_PIN           I2SO(7)
#define Y_CS_PIN                I2SO(6)
#define Y_RSENSE                X_RSENSE

#define Y2_TRINAMIC_DRIVER       5160
#define Y2_DISABLE_PIN           I2SO(8)
#define Y2_DIRECTION_PIN         I2SO(9)
#define Y2_STEP_PIN              I2SO(10)
#define Y2_CS_PIN                I2SO(11)
#define Y2_RSENSE                X_RSENSE

#define Z_TRINAMIC_DRIVER       5160
#define Z_DIRECTION_PIN         I2SO(12)
#define Z_STEP_PIN              I2SO(13)
#define Z_DISABLE_PIN           I2SO(15)
#define Z_CS_PIN                I2SO(14)
#define Z_RSENSE                X_RSENSE


/* Spindle Control Use Module slot 3*/

#define SPINDLE_TYPE            SpindleType::_10V
#define SPINDLE_OUTPUT_PIN         GPIO_NUM_26
#define SPINDLE_ENABLE_PIN      GPIO_NUM_4

/* IO Module in socket 1
Limit Switches
XYZ Probe */
#define PROBE_PIN               GPIO_NUM_33

#define X_LIMIT_PIN             GPIO_NUM_32
#define Y_LIMIT_PIN             GPIO_NUM_35
#define Z_LIMIT_PIN             GPIO_NUM_34

#define DEFAULT_INVERT_LIMIT_PINS       0