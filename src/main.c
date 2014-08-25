/*
	f4_test01_oled / naniBox
	Copyright (c) 2013
	david morris-oliveros // dmo@nanibox.com // naniBox.com

    This file is part of f4_test01_oled / naniBox.

    f4_test01_oled / naniBox is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    f4_test01_oled / naniBox is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include <string.h>
#include <ch.h>
#include <hal.h>
#include <chprintf.h>
#include <memstreams.h>
#include <time.h>
#include <math.h>
#include <chrtclib.h>
#include "oled.h"

//-----------------------------------------------------------------------------
#include "kbb_types.h"
KBB_TYPES_VERSION_CHECK(0x0002)

//-----------------------------------------------------------------------------
static WORKING_AREA(waBlinker, 128);
static msg_t 
thBlinker(void *arg) 
{
	(void)arg;
	chRegSetThreadName("Blinker");
	while( !chThdShouldTerminate() )
	{
		palTogglePad(GPIOA, GPIOA_LED4);
		chThdSleepMilliseconds(250);
	}
	return 0;
}

//-----------------------------------------------------------------------------
static SerialConfig serial1_default_cfg = {
	115200, //57600,
	0,
	USART_CR2_STOP1_BITS | USART_CR2_LINEN,
	0
};

//-----------------------------------------------------------------------------
kbb_display_t kbb_display;
uint8_t kbb_display_buffer[KBB_DISPLAY_SIZE];
uint8_t kbb_display_idx;
volatile uint8_t data_updated;


//-----------------------------------------------------------------------------
int main(void) 
{
	halInit();
	chSysInit();

	sdStart(&SD1, &serial1_default_cfg);
	chprintf(((BaseSequentialStream *)&SD1), "%s\n\r\n\r", BOARD_NAME);

	// enable the button!!
	palSetPad(GPIOC, GPIOC_KILL);

	// just blink to indicate we haven't crashed
	chThdCreateStatic(waBlinker, sizeof(waBlinker), NORMALPRIO, thBlinker, NULL);

	palSetPadMode(GPIOA, GPIOA_SPI1_SCK,  PAL_MODE_ALTERNATE(5) | PAL_STM32_OSPEED_HIGHEST);       	// New SCK.
	palSetPadMode(GPIOA, GPIOA_SPI1_MISO, PAL_MODE_ALTERNATE(5) | PAL_STM32_OSPEED_HIGHEST);       	// New MISO.
	palSetPadMode(GPIOA, GPIOA_SPI1_MOSI, PAL_MODE_ALTERNATE(5) | PAL_STM32_OSPEED_HIGHEST);       	// New MOSI.
	palSetPadMode(GPIOA, GPIOA_LED3, PAL_MODE_OUTPUT_PUSHPULL | PAL_STM32_OSPEED_LOWEST);      // LED
	palSetPadMode(GPIOA, GPIOA_LED2, PAL_MODE_OUTPUT_PUSHPULL | PAL_STM32_OSPEED_LOWEST);      // LED

	// use the default config.
	OLEDStart(&OD1, NULL, &SPID1);
	//OLED_draw_string(&OD1, "f4_test01_oled remote display - f4_test01_oled", 0x0f, 0, 0*OLED_LINE_HEIGHT);
	OLED_put_frame_buffer(&OD1);
	chThdSleepMilliseconds(20);

	while( 1 )
	{
		static int count = 0;
		OLED_clear_frame_buffer(&OD1);
		for ( int x = 0 ; x < SSD1306_LCDWIDTH ; x++ )
			for ( int y = 0 ; y < SSD1306_LCDHEIGHT ; y++ )
				OLED_put_pixel(&OD1, (x+y+count)&4, x, y);
		OLED_put_frame_buffer(&OD1);
		chThdSleepMilliseconds(10);
		palTogglePad(GPIOD, 12);
		count++;
	}
}

