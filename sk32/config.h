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

// SPECIFY NUMBER OF ROWS AND COLUMNS
// DOUBLE NUMBER OF ROWS
#define MATRIX_ROWS  8
#define MATRIX_COLS  6

//PINS FOR ROWS
#define MATRIX_ROW_PINS \
    { B1, B0, A5, A4 }

//PINS FOR COLUMNS
#define MATRIX_COL_PINS \
    { B15, B14, B13, B12, A7, A6 }

// LATENCY??
#define DEBOUNCE 2

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

// COMMUNICATION BETWEEN HALVES
// SERIAL COMMUNICATION FULL DUPLEX
// USART2 DEFINED
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN A2
#define SERIAL_USART_RX_PIN A3
#define SERIAL_USART_DRIVER SD2
#define SERIAL_USART_TIMEOUT 20 //ADDITIONAL
//#define SERIAL_USART_TIMEOUT 5 //ADDITIONAL
//#define SERIAL_USART_CR2 0x0 //1 STOP BIT IS ENOUGH
#define SELECT_SOFT_SERIAL_SPEED 1 //ADDITIONAL {1 - DEFAULT}

//#define FORCED_SYNC_THROTTLE_MS 500 //ADDITIONAL

// BITBANG DRIVER SERIAL
// ACTIVATE FOR SERIAL BITBANG DRIVER
// PIN A3 IS RX2 IN STM32F401CCU6
/*
#define SOFT_SERIAL_PIN A3
#define SELECT_SOFT_SERIAL_SPEED 1           
*/                                   

// OLED DISPLAY 128x64
// I2C COMMUNICATION
// SCL B6 PIN
// SDA B7 PIN
#ifdef OLED_ENABLE
    #define OLED_BRIGHTNESS 150
    //#define OLED_DISPLAY_128X64
    //#define I2C1_SCL_PIN B6
    //#define I2C1_SDA_PIN B7
#endif

// LIGHTING EFFECTS AND CONFIGURATION
#define RGB_DI_PIN A8
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 1
#define WS2812_PWM_PAL_MODE 1
#define WS2812_DMA_STREAM STM32_DMA2_STREAM1
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