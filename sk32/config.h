/*
Copyright 2022 @dmedina09 [LogicPGS]
Copyright 2022 @luis96raul1
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include "config_common.h"

// KEY GENERATED F0R VIAL
#define VIAL_KEYBOARD_UID \
    { 0x63, 0x8B, 0x74, 0x2F, 0xE2, 0x8C, 0xAB, 0xC1 }

// SPECIFY NUMBER OF ROWS AND COLUMNS
// DOUBLE NUMBER OF ROWS
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// PINS FOR ROWS
#define MATRIX_ROW_PINS \
    { B1, B0, A5, A4 }

// PINS FOR COLUMNS
#define MATRIX_COL_PINS \
    { B15, B14, B13, B12, A7, A6 }

// LATENCY??
#define DEBOUNCE 2

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

// USB CONFIGURATION AND DETECTION (MASTER)
// ARM DEVICES #define SPLIT_USB_DETECT IS ENABLE BY DEFAULT
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 5000
#define SPLIT_USB_TIMEOUT_POLL 100

// SPLIT KEYBOARD CONFIGURATION
#ifdef SPLIT_KEYBOARD
#    define SPLIT_LAYER_STATE_ENABLE
#    define SPLIT_LED_STATE_ENABLE
#    define SPLIT_MODS_ENABLE
#    ifdef OLED_ENABLE
#        define SPLIT_OLED_ENABLE
#    endif
#endif

// COMMUNICATION BETWEEN HALVES
// SERIAL COMMUNICATION FULL DUPLEX
// USART2 DEFINED
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN A2
#define SERIAL_USART_RX_PIN A3
#define SERIAL_USART_DRIVER SD2
#define SERIAL_USART_TIMEOUT 20 // ADDITIONAL
#define SERIAL_USART_TX_PAL_MODE 7
#define SERIAL_USART_RX_PAL_MODE 7
#define SELECT_SOFT_SERIAL_SPEED 1 // ADDITIONAL {1 - DEFAULT}

// OLED DISPLAY
//  I2C COMMUNICATION
#ifdef OLED_ENABLE
#    define OLED_BRIGHTNESS 150
#endif

// LIGHTING EFFECTS AND CONFIGURATION
#undef RGB_DI_PIN
#define RGB_DI_PIN A8
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 1
#define WS2812_PWM_PAL_MODE 1
#define WS2812_DMA_STREAM STM32_DMA2_STREAM5 // TIMX_UP
#define WS2812_DMA_CHANNEL 6

#ifdef RGB_MATRIX_ENABLE
#    define RGBLED_NUM 54 // NUMBER OF LEDS
#    define DRIVER_LED_TOTAL RGBLED_NUM
#    define RGB_MATRIX_SPLIT \
        { 27, 27 }
#    define SPLIT_TRANSPORT_MIRROR
#endif

// BOOTMAGIC
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

// BOARD WITH 8MHz CRYSTAL
#ifdef CRYSTAL_8MHZ
#    define STM32_HSECLK 8000000
#endif