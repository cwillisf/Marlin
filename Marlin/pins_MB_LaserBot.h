/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef BOARD_NAME
  #define BOARD_NAME "MakeBlock MegaPi LaserBot"
#endif


#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#define LARGE_FLASH true

//
// Servos
//

#define SERVO0_PIN          -1
#define SERVO1_PIN          -1
#define SERVO2_PIN          -1
#define SERVO3_PIN          -1


//
// Laser diode PWM driving output
//
#define LASER_PIN          10

//
// Limit Switches
//
// DIO60 == PF6 =~ A7, DIO61 == PF7 =~ A7
#define X_MIN_PIN          61
#define Y_MIN_PIN          60
#define Z_MIN_PIN          -1
#define Z_MAX_PIN          -1

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  -1
#endif

#define SLED_PIN           -1

//
// Steppers
//
#define Y_STEP_PIN         12
#define Y_DIR_PIN          11
#define Y_ENABLE_PIN       35
#define Y_CS_PIN           -1

#define X_STEP_PIN         8
#define X_DIR_PIN          7
#define X_ENABLE_PIN       36
#define X_CS_PIN           -1

#define Z_STEP_PIN         9
#define Z_DIR_PIN          6
#define Z_ENABLE_PIN       42
#define Z_CS_PIN           40

#define E0_STEP_PIN         5
#define E0_DIR_PIN          4
#define E0_ENABLE_PIN      59
#define E0_CS_PIN          -1

//
// Microstepping settings
//

#define Y_MS1_PIN         34
#define Y_MS2_PIN         33
#define Y_MS3_PIN         32
#define Y_RESET_PIN       31
#define Y_SLEEP_PIN       18

#define X_MS1_PIN         37
#define X_MS2_PIN         40
#define X_MS3_PIN         41
#define X_RESET_PIN       38
#define X_SLEEP_PIN       19

#define Z_MS1_PIN         43
#define Z_MS2_PIN         47
#define Z_MS3_PIN         48
#define Z_RESET_PIN       49
#define Z_SLEEP_PIN       9

#define E_MS1_PIN         58
#define E_MS2_PIN         57
#define E_MS3_PIN         56
#define E_RESET_PIN       55
#define E_SLEEP_PIN       2
 


//
// Temperature Sensors ( use analogIn numbering scheme here! )
//
#define TEMP_0_PIN         14   // Analog Input
#define TEMP_1_PIN         -1   // Analog Input
#define TEMP_BED_PIN       -1   // Analog Input


#define SDPOWER            -1
#define SDSS               -1
//#define LED_PIN            -1
#define FAN_PIN            -1
#define PS_ON_PIN          -1
#define KILL_PIN           -1

#define LED_PIN            13

#define HEATER_0_PIN       62 // need some non-conflicting port; unused.
#define HEATER_1_PIN       -1
#define HEATER_2_PIN       -1



#if ENABLED(SPINDLE_LASER_ENABLE)
//#define SPINDLE_DIR_PIN    10 // this is a n.c.
#define SPINDLE_LASER_ENABLE_PIN 10  // should have a pull up
#define SPINDLE_LASER_PWM_PIN  10  // must have a pull up
#endif
