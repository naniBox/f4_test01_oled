/*
    ChibiOS/RT - Copyright (C) 2006-2013 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for STMicroelectronics STM32F4-Discovery board.
 */

/*
 * Board identifier.
 */
#define BOARD_NANIBOX_f4_test01_oled_V01
#define BOARD_NAME                  "naniBox.com // f4_test01_oled_v01"


/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                0
#endif

#define STM32_HSECLK                12000000


/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   330

/*
 * MCU type as defined in the ST header file stm32f4xx.h.
 */
#define STM32F4XX

/*
 * IO pins assignments.
 */

#define GPIOD_PIN0                  0
#define GPIOD_PIN1                  1
#define GPIOD_PIN2                  2
#define GPIOD_PIN3                  3
#define GPIOD_RESET                 4
#define GPIOD_OVER_CURRENT          5
#define GPIOD_PIN6                  6
#define GPIOD_PIN7                  7
#define GPIOD_PIN8                  8
#define GPIOD_PIN9                  9
#define GPIOD_PIN10                 10
#define GPIOD_PIN11                 11
#define GPIOD_LED4                  12
#define GPIOD_LED3                  13
#define GPIOD_LED5                  14
#define GPIOD_LED6                  15

#define GPIOE_INT1                  0
#define GPIOE_INT2                  1
#define GPIOE_PIN2                  2
#define GPIOE_CS_SPI                3
#define GPIOE_PIN4                  4
#define GPIOE_PIN5                  5
#define GPIOE_PIN6                  6
#define GPIOE_PIN7                  7
#define GPIOE_PIN8                  8
#define GPIOE_PIN9                  9
#define GPIOE_PIN10                 10
#define GPIOE_PIN11                 11
#define GPIOE_PIN12                 12
#define GPIOE_PIN13                 13
#define GPIOE_PIN14                 14
#define GPIOE_PIN15                 15

#define GPIOF_PIN0                  0
#define GPIOF_PIN1                  1
#define GPIOF_PIN2                  2
#define GPIOF_PIN3                  3
#define GPIOF_PIN4                  4
#define GPIOF_PIN5                  5
#define GPIOF_PIN6                  6
#define GPIOF_PIN7                  7
#define GPIOF_PIN8                  8
#define GPIOF_PIN9                  9
#define GPIOF_PIN10                 10
#define GPIOF_PIN11                 11
#define GPIOF_PIN12                 12
#define GPIOF_PIN13                 13
#define GPIOF_PIN14                 14
#define GPIOF_PIN15                 15

#define GPIOG_PIN0                  0
#define GPIOG_PIN1                  1
#define GPIOG_PIN2                  2
#define GPIOG_PIN3                  3
#define GPIOG_PIN4                  4
#define GPIOG_PIN5                  5
#define GPIOG_PIN6                  6
#define GPIOG_PIN7                  7
#define GPIOG_PIN8                  8
#define GPIOG_PIN9                  9
#define GPIOG_PIN10                 10
#define GPIOG_PIN11                 11
#define GPIOG_PIN12                 12
#define GPIOG_PIN13                 13
#define GPIOG_PIN14                 14
#define GPIOG_PIN15                 15

#define GPIOH_OSC_IN                0
#define GPIOH_OSC_OUT               1
#define GPIOH_PIN2                  2
#define GPIOH_PIN3                  3
#define GPIOH_PIN4                  4
#define GPIOH_PIN5                  5
#define GPIOH_PIN6                  6
#define GPIOH_PIN7                  7
#define GPIOH_PIN8                  8
#define GPIOH_PIN9                  9
#define GPIOH_PIN10                 10
#define GPIOH_PIN11                 11
#define GPIOH_PIN12                 12
#define GPIOH_PIN13                 13
#define GPIOH_PIN14                 14
#define GPIOH_PIN15                 15

#define GPIOI_PIN0                  0
#define GPIOI_PIN1                  1
#define GPIOI_PIN2                  2
#define GPIOI_PIN3                  3
#define GPIOI_PIN4                  4
#define GPIOI_PIN5                  5
#define GPIOI_PIN6                  6
#define GPIOI_PIN7                  7
#define GPIOI_PIN8                  8
#define GPIOI_PIN9                  9
#define GPIOI_PIN10                 10
#define GPIOI_PIN11                 11
#define GPIOI_PIN12                 12
#define GPIOI_PIN13                 13
#define GPIOI_PIN14                 14
#define GPIOI_PIN15                 15

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_2M(n)            (0U << ((n) * 2))
#define PIN_OSPEED_25M(n)           (1U << ((n) * 2))
#define PIN_OSPEED_50M(n)           (2U << ((n) * 2))
#define PIN_OSPEED_100M(n)          (3U << ((n) * 2))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2))
#define PIN_AFIO_AF(n, v)           ((v##U) << ((n % 8) * 4))

/*
 * GPIOA setup:
 */

#define GPIOA_BTN1                  0
#define GPIOA_LED2                  1
#define GPIOA_LED3                  2
#define GPIOA_LED4                  3
#define GPIOA__PA04                 4
#define GPIOA_SPI1_SCK              5
#define GPIOA_SPI1_MISO             6
#define GPIOA_SPI1_MOSI             7

#define GPIOA__PA08                 8
#define GPIOA_USART1_TX             9
#define GPIOA_USART1_RX             10
#define GPIOA__PA11                 11
#define GPIOA__PA12                 12
#define GPIOA_SWDIO                 13
#define GPIOA_SWCLK                 14
#define GPIOA_LED1                  15


#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_BTN1) |                   \
                                     PIN_MODE_OUTPUT(GPIOA_LED2) |                  \
                                     PIN_MODE_OUTPUT(GPIOA_LED3) |                  \
                                     PIN_MODE_OUTPUT(GPIOA_LED4) |                  \
                                     PIN_MODE_INPUT(GPIOA__PA04) |                  \
                                     PIN_MODE_ALTERNATE(GPIOA_SPI1_SCK) |           \
                                     PIN_MODE_ALTERNATE(GPIOA_SPI1_MISO) |          \
                                     PIN_MODE_ALTERNATE(GPIOA_SPI1_MOSI) |          \
                                     PIN_MODE_INPUT(GPIOA__PA08) |                  \
                                     PIN_MODE_ALTERNATE(GPIOA_USART1_TX) |          \
                                     PIN_MODE_ALTERNATE(GPIOA_USART1_RX) |          \
                                     PIN_MODE_INPUT(GPIOA__PA11) |                  \
                                     PIN_MODE_INPUT(GPIOA__PA12) |                  \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |              \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |              \
                                     PIN_MODE_INPUT(GPIOA_LED1))

#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_BTN1) |               \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LED2) |               \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LED3) |               \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LED4) |               \
                                     PIN_OTYPE_PUSHPULL(GPIOA__PA04) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SPI1_SCK) |           \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SPI1_MISO) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SPI1_MOSI) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOA__PA08) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART1_TX) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART1_RX) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOA__PA11) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOA__PA12) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LED1))

#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_2M(GPIOA_BTN1) |                    \
                                     PIN_OSPEED_100M(GPIOA_LED2) |                  \
                                     PIN_OSPEED_100M(GPIOA_LED3) |                  \
                                     PIN_OSPEED_100M(GPIOA_LED4) |                  \
                                     PIN_OSPEED_2M(GPIOA__PA04) |                   \
                                     PIN_OSPEED_100M(GPIOA_SPI1_SCK) |              \
                                     PIN_OSPEED_100M(GPIOA_SPI1_MISO) |             \
                                     PIN_OSPEED_100M(GPIOA_SPI1_MOSI) |             \
                                     PIN_OSPEED_2M(GPIOA__PA08) |                   \
                                     PIN_OSPEED_100M(GPIOA_USART1_TX) |             \
                                     PIN_OSPEED_100M(GPIOA_USART1_RX) |             \
                                     PIN_OSPEED_2M(GPIOA__PA11) |                   \
                                     PIN_OSPEED_2M(GPIOA__PA12) |                   \
                                     PIN_OSPEED_100M(GPIOA_SWDIO) |                 \
                                     PIN_OSPEED_100M(GPIOA_SWCLK) |                 \
                                     PIN_OSPEED_100M(GPIOA_LED1))

#define VAL_GPIOA_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOA_BTN1) |               \
                                     PIN_PUPDR_PULLUP(GPIOA_LED2) |                 \
                                     PIN_PUPDR_PULLUP(GPIOA_LED3) |                 \
                                     PIN_PUPDR_PULLUP(GPIOA_LED4) |                 \
                                     PIN_PUPDR_PULLUP(GPIOA__PA04) |                \
                                     PIN_PUPDR_PULLUP(GPIOA_SPI1_SCK) |             \
                                     PIN_PUPDR_PULLUP(GPIOA_SPI1_MISO) |            \
                                     PIN_PUPDR_PULLUP(GPIOA_SPI1_MOSI) |            \
                                     PIN_PUPDR_PULLUP(GPIOA__PA08) |                \
                                     PIN_PUPDR_PULLUP(GPIOA_USART1_TX) |            \
                                     PIN_PUPDR_PULLUP(GPIOA_USART1_RX) |            \
                                     PIN_PUPDR_PULLUP(GPIOA__PA11) |                \
                                     PIN_PUPDR_PULLUP(GPIOA__PA12) |                \
                                     PIN_PUPDR_PULLUP(GPIOA_SWDIO) |                \
                                     PIN_PUPDR_PULLUP(GPIOA_SWCLK) |                \
                                     PIN_PUPDR_PULLUP(GPIOA_LED1))

#define VAL_GPIOA_ODR               (PIN_ODR_LOW(GPIOA_BTN1) |                      \
                                     PIN_ODR_HIGH(GPIOA_LED2) |                     \
                                     PIN_ODR_HIGH(GPIOA_LED3) |                     \
                                     PIN_ODR_HIGH(GPIOA_LED4) |                     \
                                     PIN_ODR_HIGH(GPIOA__PA04) |                    \
                                     PIN_ODR_HIGH(GPIOA_SPI1_SCK) |                 \
                                     PIN_ODR_HIGH(GPIOA_SPI1_MISO) |                \
                                     PIN_ODR_HIGH(GPIOA_SPI1_MOSI) |                \
                                     PIN_ODR_HIGH(GPIOA__PA08) |                    \
                                     PIN_ODR_HIGH(GPIOA_USART1_TX) |                \
                                     PIN_ODR_HIGH(GPIOA_USART1_RX) |                \
                                     PIN_ODR_HIGH(GPIOA__PA11) |                    \
                                     PIN_ODR_HIGH(GPIOA__PA12) |                    \
                                     PIN_ODR_HIGH(GPIOA_SWDIO) |                    \
                                     PIN_ODR_HIGH(GPIOA_SWCLK) |                    \
                                     PIN_ODR_HIGH(GPIOA_LED1))

#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_BTN1, 0) |                   \
                                     PIN_AFIO_AF(GPIOA_LED2, 0) |                   \
                                     PIN_AFIO_AF(GPIOA_LED3, 0) |                   \
                                     PIN_AFIO_AF(GPIOA_LED4, 0) |                   \
                                     PIN_AFIO_AF(GPIOA__PA04, 0) |                  \
                                     PIN_AFIO_AF(GPIOA_SPI1_SCK, 5) |               \
                                     PIN_AFIO_AF(GPIOA_SPI1_MISO, 5) |              \
                                     PIN_AFIO_AF(GPIOA_SPI1_MOSI, 5))

#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA__PA08, 0) |                  \
                                     PIN_AFIO_AF(GPIOA_USART1_TX, 7) |              \
                                     PIN_AFIO_AF(GPIOA_USART1_RX, 7) |              \
                                     PIN_AFIO_AF(GPIOA__PA11, 0) |                  \
                                     PIN_AFIO_AF(GPIOA__PA12, 0) |                  \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0) |                  \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0) |                  \
                                     PIN_AFIO_AF(GPIOA_LED1, 0))

/*
 * GPIOB setup:
 */
#define GPIOB_VBAT_MON              0
#define GPIOB__PB01                 1
#define GPIOB__PB02                 2
#define GPIOB_SWO                   3
#define GPIOB__PB04                 4
#define GPIOB__PB05                 5
#define GPIOB__PB06                 6
#define GPIOB__PB07                 7

#define GPIOB_STAT                  8
#define GPIOB__PB09                 9
#define GPIOB_USART3_TX             10
#define GPIOB_USART3_RX             11
#define GPIOB_OLED_DC               12
#define GPIOB_OLED_RES              13
#define GPIOB_OLED_CS               14
#define GPIOB__PB15                 15

#define VAL_GPIOB_MODER             (PIN_MODE_ANALOG(GPIOB_VBAT_MON) |              \
                                     PIN_MODE_INPUT(GPIOB__PB01) |                  \
                                     PIN_MODE_INPUT(GPIOB__PB02) |                  \
                                     PIN_MODE_ALTERNATE(GPIOB_SWO) |                \
                                     PIN_MODE_INPUT(GPIOB__PB04) |                  \
                                     PIN_MODE_INPUT(GPIOB__PB05) |                  \
                                     PIN_MODE_INPUT(GPIOB__PB06) |                  \
                                     PIN_MODE_INPUT(GPIOB__PB07) |                  \
                                     PIN_MODE_INPUT(GPIOB_STAT) |                   \
                                     PIN_MODE_INPUT(GPIOB__PB09) |                  \
                                     PIN_MODE_ALTERNATE(GPIOB_USART3_TX) |          \
                                     PIN_MODE_ALTERNATE(GPIOB_USART3_RX) |          \
                                     PIN_MODE_OUTPUT(GPIOB_OLED_DC) |               \
                                     PIN_MODE_OUTPUT(GPIOB_OLED_RES) |              \
                                     PIN_MODE_OUTPUT(GPIOB_OLED_CS) |               \
                                     PIN_MODE_INPUT(GPIOB__PB15))

#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_VBAT_MON) |           \
                                     PIN_OTYPE_PUSHPULL(GPIOB__PB01) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOB__PB02) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOB_SWO) |                \
                                     PIN_OTYPE_PUSHPULL(GPIOB__PB04) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOB__PB05) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOB__PB06) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOB__PB07) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOB_STAT) |               \
                                     PIN_OTYPE_PUSHPULL(GPIOB__PB09) |              \
                                     PIN_OTYPE_PUSHPULL(GPIOB_USART3_TX) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOB_USART3_RX) |          \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OLED_DC) |            \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OLED_RES) |           \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OLED_CS) |            \
                                     PIN_OTYPE_PUSHPULL(GPIOB__PB15))

#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_100M(GPIOB_VBAT_MON) |              \
                                     PIN_OSPEED_100M(GPIOB__PB01) |                 \
                                     PIN_OSPEED_100M(GPIOB__PB02) |                 \
                                     PIN_OSPEED_100M(GPIOB_SWO) |                   \
                                     PIN_OSPEED_100M(GPIOB__PB04) |                 \
                                     PIN_OSPEED_100M(GPIOB__PB05) |                 \
                                     PIN_OSPEED_100M(GPIOB__PB06) |                 \
                                     PIN_OSPEED_100M(GPIOB__PB07) |                 \
                                     PIN_OSPEED_100M(GPIOB_STAT) |                  \
                                     PIN_OSPEED_100M(GPIOB__PB09) |                 \
                                     PIN_OSPEED_100M(GPIOB_USART3_TX) |             \
                                     PIN_OSPEED_100M(GPIOB_USART3_RX) |             \
                                     PIN_OSPEED_100M(GPIOB_OLED_DC) |               \
                                     PIN_OSPEED_2M(GPIOB_OLED_RES) |                \
                                     PIN_OSPEED_100M(GPIOB_OLED_CS) |               \
                                     PIN_OSPEED_100M(GPIOB__PB15))

#define VAL_GPIOB_PUPDR             (PIN_PUPDR_PULLUP(GPIOB_VBAT_MON) |             \
                                     PIN_PUPDR_PULLUP(GPIOB__PB01) |                \
                                     PIN_PUPDR_PULLUP(GPIOB__PB02) |                \
                                     PIN_PUPDR_FLOATING(GPIOB_SWO) |                \
                                     PIN_PUPDR_PULLUP(GPIOB__PB04) |                \
                                     PIN_PUPDR_PULLUP(GPIOB__PB05) |                \
                                     PIN_PUPDR_PULLUP(GPIOB__PB06) |                \
                                     PIN_PUPDR_PULLUP(GPIOB__PB07) |                \
                                     PIN_PUPDR_PULLUP(GPIOB_STAT) |                 \
                                     PIN_PUPDR_PULLUP(GPIOB__PB09) |                \
                                     PIN_PUPDR_PULLUP(GPIOB_USART3_TX) |            \
                                     PIN_PUPDR_PULLUP(GPIOB_USART3_RX) |            \
                                     PIN_PUPDR_PULLUP(GPIOB_OLED_DC) |              \
                                     PIN_PUPDR_PULLUP(GPIOB_OLED_RES) |             \
                                     PIN_PUPDR_PULLUP(GPIOB_OLED_CS) |              \
                                     PIN_PUPDR_PULLUP(GPIOB__PB15))

#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_VBAT_MON) |                 \
                                     PIN_ODR_HIGH(GPIOB__PB01) |                    \
                                     PIN_ODR_HIGH(GPIOB__PB02) |                    \
                                     PIN_ODR_HIGH(GPIOB_SWO) |                      \
                                     PIN_ODR_HIGH(GPIOB__PB04) |                    \
                                     PIN_ODR_HIGH(GPIOB__PB05) |                    \
                                     PIN_ODR_HIGH(GPIOB__PB06) |                    \
                                     PIN_ODR_HIGH(GPIOB__PB07) |                    \
                                     PIN_ODR_HIGH(GPIOB_STAT) |                     \
                                     PIN_ODR_HIGH(GPIOB__PB09) |                    \
                                     PIN_ODR_HIGH(GPIOB_USART3_TX) |                \
                                     PIN_ODR_HIGH(GPIOB_USART3_RX) |                \
                                     PIN_ODR_HIGH(GPIOB_OLED_DC) |                  \
                                     PIN_ODR_HIGH(GPIOB_OLED_RES) |                 \
                                     PIN_ODR_HIGH(GPIOB_OLED_CS) |                  \
                                     PIN_ODR_HIGH(GPIOB__PB15))

#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_VBAT_MON, 0) |               \
                                     PIN_AFIO_AF(GPIOB__PB01, 0) |                  \
                                     PIN_AFIO_AF(GPIOB__PB02, 0) |                  \
                                     PIN_AFIO_AF(GPIOB_SWO, 0) |                    \
                                     PIN_AFIO_AF(GPIOB__PB04, 0) |                  \
                                     PIN_AFIO_AF(GPIOB__PB05, 0) |                  \
                                     PIN_AFIO_AF(GPIOB__PB06, 4) |                  \
                                     PIN_AFIO_AF(GPIOB__PB07, 0))

#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_STAT, 0) |                   \
                                     PIN_AFIO_AF(GPIOB__PB09, 0) |                  \
                                     PIN_AFIO_AF(GPIOB_USART3_TX, 7) |              \
                                     PIN_AFIO_AF(GPIOB_USART3_RX, 7) |              \
                                     PIN_AFIO_AF(GPIOB_OLED_DC, 0) |                \
                                     PIN_AFIO_AF(GPIOB_OLED_RES, 0) |               \
                                     PIN_AFIO_AF(GPIOB_OLED_CS, 0) |                \
                                     PIN_AFIO_AF(GPIOB__PB15, 0))

/*
 * GPIOC setup:
 */
#define GPIOC_VIN_TAP               0
#define GPIOC_IMON                  1
#define GPIOC_CTRL                  2
#define GPIOC_CHG                   3
#define GPIOC_KILL                  4
#define GPIOC_INT                   5
#define GPIOC_BTN2                  6
#define GPIOC_USART1_VALID          7
#define GPIOC__PC08                 8
#define GPIOC__PC09                 9
#define GPIOC__PC10                 10
#define GPIOC__PC11                 11
#define GPIOC__PC12                 12
#define GPIOC_LTC_TTL               13
#define GPIOC_OSC32_IN              14
#define GPIOC_OSC32_OUT             15


#define VAL_GPIOC_MODER             (PIN_MODE_ANALOG(GPIOC_VIN_TAP) |                     \
                                     PIN_MODE_INPUT(GPIOC_IMON) |                         \
                                     PIN_MODE_OUTPUT(GPIOC_CTRL) |                        \
                                     PIN_MODE_INPUT(GPIOC_CHG) |                          \
                                     PIN_MODE_OUTPUT(GPIOC_KILL) |                        \
                                     PIN_MODE_INPUT(GPIOC_INT) |                          \
                                     PIN_MODE_INPUT(GPIOC_BTN2) |                         \
                                     PIN_MODE_INPUT(GPIOC_USART1_VALID) |                 \
                                     PIN_MODE_INPUT(GPIOC__PC08) |                        \
                                     PIN_MODE_INPUT(GPIOC__PC09) |                        \
                                     PIN_MODE_INPUT(GPIOC__PC10) |                        \
                                     PIN_MODE_INPUT(GPIOC__PC11) |                        \
                                     PIN_MODE_INPUT(GPIOC__PC12) |                        \
                                     PIN_MODE_INPUT(GPIOC_LTC_TTL) |                      \
                                     PIN_MODE_INPUT(GPIOC_OSC32_IN) |                     \
                                     PIN_MODE_INPUT(GPIOC_OSC32_OUT))

#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_VIN_TAP) |                  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_IMON) |                     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_CTRL) |                     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_CHG) |                      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_KILL) |                     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_INT) |                      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_BTN2) |                     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_USART1_VALID) |             \
                                     PIN_OTYPE_PUSHPULL(GPIOC__PC08) |                    \
                                     PIN_OTYPE_PUSHPULL(GPIOC__PC09) |                    \
                                     PIN_OTYPE_PUSHPULL(GPIOC__PC10) |                    \
                                     PIN_OTYPE_PUSHPULL(GPIOC__PC11) |                    \
                                     PIN_OTYPE_PUSHPULL(GPIOC__PC12) |                    \
                                     PIN_OTYPE_PUSHPULL(GPIOC_LTC_TTL) |                  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_IN) |                 \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_OUT))

#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_100M(GPIOC_VIN_TAP) |                     \
                                     PIN_OSPEED_100M(GPIOC_IMON) |                        \
                                     PIN_OSPEED_100M(GPIOC_CTRL) |                        \
                                     PIN_OSPEED_100M(GPIOC_CHG) |                         \
                                     PIN_OSPEED_100M(GPIOC_KILL) |                        \
                                     PIN_OSPEED_100M(GPIOC_INT) |                         \
                                     PIN_OSPEED_100M(GPIOC_BTN2) |                        \
                                     PIN_OSPEED_100M(GPIOC_USART1_VALID) |                \
                                     PIN_OSPEED_100M(GPIOC__PC08) |                       \
                                     PIN_OSPEED_100M(GPIOC__PC09) |                       \
                                     PIN_OSPEED_100M(GPIOC__PC10) |                       \
                                     PIN_OSPEED_100M(GPIOC__PC11) |                       \
                                     PIN_OSPEED_100M(GPIOC__PC12) |                       \
                                     PIN_OSPEED_100M(GPIOC_LTC_TTL) |                     \
                                     PIN_OSPEED_100M(GPIOC_OSC32_IN) |                    \
                                     PIN_OSPEED_100M(GPIOC_OSC32_OUT))

#define VAL_GPIOC_PUPDR             (PIN_PUPDR_PULLUP(GPIOC_VIN_TAP) |                    \
                                     PIN_PUPDR_PULLUP(GPIOC_IMON) |                       \
                                     PIN_PUPDR_PULLDOWN(GPIOC_CTRL) |                     \
                                     PIN_PUPDR_PULLUP(GPIOC_CHG) |                        \
                                     PIN_PUPDR_PULLUP(GPIOC_KILL) |                       \
                                     PIN_PUPDR_PULLUP(GPIOC_INT) |                        \
                                     PIN_PUPDR_PULLUP(GPIOC_BTN2) |                       \
                                     PIN_PUPDR_PULLUP(GPIOC_USART1_VALID) |               \
                                     PIN_PUPDR_PULLUP(GPIOC__PC08) |                      \
                                     PIN_PUPDR_PULLUP(GPIOC__PC09) |                      \
                                     PIN_PUPDR_PULLUP(GPIOC__PC10) |                      \
                                     PIN_PUPDR_PULLUP(GPIOC__PC11) |                      \
                                     PIN_PUPDR_PULLUP(GPIOC__PC12) |                      \
                                     PIN_PUPDR_PULLUP(GPIOC_LTC_TTL) |                    \
                                     PIN_PUPDR_PULLUP(GPIOC_OSC32_IN) |                   \
                                     PIN_PUPDR_PULLUP(GPIOC_OSC32_OUT))

#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_VIN_TAP) |                        \
                                     PIN_ODR_HIGH(GPIOC_IMON) |                           \
                                     PIN_ODR_LOW(GPIOC_CTRL) |                            \
                                     PIN_ODR_HIGH(GPIOC_CHG) |                            \
                                     PIN_ODR_HIGH(GPIOC_KILL) |                           \
                                     PIN_ODR_HIGH(GPIOC_INT) |                            \
                                     PIN_ODR_HIGH(GPIOC_BTN2) |                           \
                                     PIN_ODR_HIGH(GPIOC_USART1_VALID) |                   \
                                     PIN_ODR_HIGH(GPIOC__PC08) |                          \
                                     PIN_ODR_HIGH(GPIOC__PC09) |                          \
                                     PIN_ODR_HIGH(GPIOC__PC10) |                          \
                                     PIN_ODR_HIGH(GPIOC__PC11) |                          \
                                     PIN_ODR_HIGH(GPIOC__PC12) |                          \
                                     PIN_ODR_HIGH(GPIOC_LTC_TTL) |                        \
                                     PIN_ODR_HIGH(GPIOC_OSC32_IN) |                       \
                                     PIN_ODR_HIGH(GPIOC_OSC32_OUT))

#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_VIN_TAP, 0) |                      \
                                     PIN_AFIO_AF(GPIOC_IMON, 0) |                         \
                                     PIN_AFIO_AF(GPIOC_CTRL, 0) |                         \
                                     PIN_AFIO_AF(GPIOC_CHG, 0) |                          \
                                     PIN_AFIO_AF(GPIOC_KILL, 0) |                         \
                                     PIN_AFIO_AF(GPIOC_INT, 0) |                          \
                                     PIN_AFIO_AF(GPIOC_BTN2, 0) |                         \
                                     PIN_AFIO_AF(GPIOC_USART1_VALID, 6))

#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC__PC08, 0) |                        \
                                     PIN_AFIO_AF(GPIOC__PC09, 0) |                        \
                                     PIN_AFIO_AF(GPIOC__PC10, 6) |                        \
                                     PIN_AFIO_AF(GPIOC__PC11, 0) |                        \
                                     PIN_AFIO_AF(GPIOC__PC12, 6) |                        \
                                     PIN_AFIO_AF(GPIOC_LTC_TTL, 0) |                      \
                                     PIN_AFIO_AF(GPIOC_OSC32_IN, 0) |                     \
                                     PIN_AFIO_AF(GPIOC_OSC32_OUT, 0))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (input pullup).
 * PD1  - PIN1                      (input pullup).
 * PD2  - PIN2                      (input pullup).
 * PD3  - PIN3                      (input pullup).
 * PD4  - RESET                     (output pushpull maximum).
 * PD5  - OVER_CURRENT              (input floating).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - PIN10                     (input pullup).
 * PD11 - PIN11                     (input pullup).
 * PD12 - LED4                      (output pushpull maximum).
 * PD13 - LED3                      (output pushpull maximum).
 * PD14 - LED5                      (output pushpull maximum).
 * PD15 - LED6                      (output pushpull maximum).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_INPUT(GPIOD_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |           \
                                     PIN_MODE_OUTPUT(GPIOD_RESET) |         \
                                     PIN_MODE_INPUT(GPIOD_OVER_CURRENT) |   \
                                     PIN_MODE_INPUT(GPIOD_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN11) |          \
                                     PIN_MODE_OUTPUT(GPIOD_LED4) |          \
                                     PIN_MODE_OUTPUT(GPIOD_LED3) |          \
                                     PIN_MODE_OUTPUT(GPIOD_LED5) |          \
                                     PIN_MODE_OUTPUT(GPIOD_LED6))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_RESET) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_OVER_CURRENT) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_LED4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_LED3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_LED5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_LED6))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_100M(GPIOD_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOD_RESET) |         \
                                     PIN_OSPEED_100M(GPIOD_OVER_CURRENT) |  \
                                     PIN_OSPEED_100M(GPIOD_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOD_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOD_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOD_LED4) |          \
                                     PIN_OSPEED_100M(GPIOD_LED3) |          \
                                     PIN_OSPEED_100M(GPIOD_LED5) |          \
                                     PIN_OSPEED_100M(GPIOD_LED6))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_PULLUP(GPIOD_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_RESET) |      \
                                     PIN_PUPDR_FLOATING(GPIOD_OVER_CURRENT) |\
                                     PIN_PUPDR_PULLUP(GPIOD_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN11) |        \
                                     PIN_PUPDR_FLOATING(GPIOD_LED4) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_LED3) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_LED5) |       \
                                     PIN_PUPDR_FLOATING(GPIOD_LED6))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOD_RESET) |            \
                                     PIN_ODR_HIGH(GPIOD_OVER_CURRENT) |     \
                                     PIN_ODR_HIGH(GPIOD_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN11) |            \
                                     PIN_ODR_LOW(GPIOD_LED4) |              \
                                     PIN_ODR_LOW(GPIOD_LED3) |              \
                                     PIN_ODR_LOW(GPIOD_LED5) |              \
                                     PIN_ODR_LOW(GPIOD_LED6))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOD_RESET, 0) |          \
                                     PIN_AFIO_AF(GPIOD_OVER_CURRENT, 0) |   \
                                     PIN_AFIO_AF(GPIOD_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOD_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOD_LED4, 0) |           \
                                     PIN_AFIO_AF(GPIOD_LED3, 0) |           \
                                     PIN_AFIO_AF(GPIOD_LED5, 0) |           \
                                     PIN_AFIO_AF(GPIOD_LED6, 0))

/*
 * GPIOE setup:
 *
 * PE0  - INT1                      (input floating).
 * PE1  - INT2                      (input floating).
 * PE2  - PIN2                      (input floating).
 * PE3  - CS_SPI                    (output pushpull maximum).
 * PE4  - PIN4                      (input floating).
 * PE5  - PIN5                      (input floating).
 * PE6  - PIN6                      (input floating).
 * PE7  - PIN7                      (input floating).
 * PE8  - PIN8                      (input floating).
 * PE9  - PIN9                      (input floating).
 * PE10 - PIN10                     (input floating).
 * PE11 - PIN11                     (input floating).
 * PE12 - PIN12                     (input floating).
 * PE13 - PIN13                     (input floating).
 * PE14 - PIN14                     (input floating).
 * PE15 - PIN15                     (input floating).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_INT1) |           \
                                     PIN_MODE_INPUT(GPIOE_INT2) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN2) |           \
                                     PIN_MODE_OUTPUT(GPIOE_CS_SPI) |        \
                                     PIN_MODE_INPUT(GPIOE_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_INT1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_INT2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CS_SPI) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_100M(GPIOE_INT1) |          \
                                     PIN_OSPEED_100M(GPIOE_INT2) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOE_CS_SPI) |        \
                                     PIN_OSPEED_100M(GPIOE_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOE_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_FLOATING(GPIOE_INT1) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_INT2) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_CS_SPI) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN5) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_INT1) |             \
                                     PIN_ODR_HIGH(GPIOE_INT2) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOE_CS_SPI) |           \
                                     PIN_ODR_HIGH(GPIOE_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_INT1, 0) |           \
                                     PIN_AFIO_AF(GPIOE_INT2, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOE_CS_SPI, 0) |         \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN7, 0))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOE_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOE_PIN15, 0))

/*
 * GPIOF setup:
 *
 * PF0  - PIN0                      (input floating).
 * PF1  - PIN1                      (input floating).
 * PF2  - PIN2                      (input floating).
 * PF3  - PIN3                      (input floating).
 * PF4  - PIN4                      (input floating).
 * PF5  - PIN5                      (input floating).
 * PF6  - PIN6                      (input floating).
 * PF7  - PIN7                      (input floating).
 * PF8  - PIN8                      (input floating).
 * PF9  - PIN9                      (input floating).
 * PF10 - PIN10                     (input floating).
 * PF11 - PIN11                     (input floating).
 * PF12 - PIN12                     (input floating).
 * PF13 - PIN13                     (input floating).
 * PF14 - PIN14                     (input floating).
 * PF15 - PIN15                     (input floating).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_INPUT(GPIOF_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_100M(GPIOF_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOF_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_PIN0) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN1) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN5) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN7, 0))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOF_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0))

/*
 * GPIOG setup:
 *
 * PG0  - PIN0                      (input floating).
 * PG1  - PIN1                      (input floating).
 * PG2  - PIN2                      (input floating).
 * PG3  - PIN3                      (input floating).
 * PG4  - PIN4                      (input floating).
 * PG5  - PIN5                      (input floating).
 * PG6  - PIN6                      (input floating).
 * PG7  - PIN7                      (input floating).
 * PG8  - PIN8                      (input floating).
 * PG9  - PIN9                      (input floating).
 * PG10 - PIN10                     (input floating).
 * PG11 - PIN11                     (input floating).
 * PG12 - PIN12                     (input floating).
 * PG13 - PIN13                     (input floating).
 * PG14 - PIN14                     (input floating).
 * PG15 - PIN15                     (input floating).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_INPUT(GPIOG_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_100M(GPIOG_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOG_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_FLOATING(GPIOG_PIN0) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN1) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN5) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_HIGH(GPIOG_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN7, 0))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOG_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOG_PIN15, 0))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - OSC_OUT                   (input floating).
 * PH2  - PIN2                      (input floating).
 * PH3  - PIN3                      (input floating).
 * PH4  - PIN4                      (input floating).
 * PH5  - PIN5                      (input floating).
 * PH6  - PIN6                      (input floating).
 * PH7  - PIN7                      (input floating).
 * PH8  - PIN8                      (input floating).
 * PH9  - PIN9                      (input floating).
 * PH10 - PIN10                     (input floating).
 * PH11 - PIN11                     (input floating).
 * PH12 - PIN12                     (input floating).
 * PH13 - PIN13                     (input floating).
 * PH14 - PIN14                     (input floating).
 * PH15 - PIN15                     (input floating).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_OSC_IN) |         \
                                     PIN_MODE_INPUT(GPIOH_OSC_OUT) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OSC_OUT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_100M(GPIOH_OSC_IN) |        \
                                     PIN_OSPEED_100M(GPIOH_OSC_OUT) |       \
                                     PIN_OSPEED_100M(GPIOH_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOH_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(GPIOH_OSC_IN) |     \
                                     PIN_PUPDR_FLOATING(GPIOH_OSC_OUT) |    \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN5) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOH_OSC_OUT) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_OSC_IN, 0) |         \
                                     PIN_AFIO_AF(GPIOH_OSC_OUT, 0) |        \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0))

/*
 * GPIOI setup:
 *
 * PI0  - PIN0                      (input floating).
 * PI1  - PIN1                      (input floating).
 * PI2  - PIN2                      (input floating).
 * PI3  - PIN3                      (input floating).
 * PI4  - PIN4                      (input floating).
 * PI5  - PIN5                      (input floating).
 * PI6  - PIN6                      (input floating).
 * PI7  - PIN7                      (input floating).
 * PI8  - PIN8                      (input floating).
 * PI9  - PIN9                      (input floating).
 * PI10 - PIN10                     (input floating).
 * PI11 - PIN11                     (input floating).
 * PI12 - PIN12                     (input floating).
 * PI13 - PIN13                     (input floating).
 * PI14 - PIN14                     (input floating).
 * PI15 - PIN15                     (input floating).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_INPUT(GPIOI_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_100M(GPIOI_PIN0) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN1) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN2) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN3) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN4) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN5) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN6) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN7) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN8) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN9) |          \
                                     PIN_OSPEED_100M(GPIOI_PIN10) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN11) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN12) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN13) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN14) |         \
                                     PIN_OSPEED_100M(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_FLOATING(GPIOI_PIN0) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN1) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN5) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN6) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN8) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN9) |       \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN14) |      \
                                     PIN_PUPDR_FLOATING(GPIOI_PIN15))
#define VAL_GPIOI_ODR               (PIN_ODR_HIGH(GPIOI_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_PIN0, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN1, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN2, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN3, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN4, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN5, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN6, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN7, 0))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_PIN8, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN9, 0) |           \
                                     PIN_AFIO_AF(GPIOI_PIN10, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN11, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN12, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN13, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN14, 0) |          \
                                     PIN_AFIO_AF(GPIOI_PIN15, 0))


#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */