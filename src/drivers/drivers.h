/*
 * drivers.h
 *
 *  Created on: Mar 31, 2019
 *      Author: Daniel Hamilton
 */

#ifndef DRIVERS_H_
#define DRIVERS_H_

#include <msp430.h>
#include "UF_LCD.h"

// button
void button_init ( void );
void led_init    ( void );

// spi
void spi_init(void);
void dac_spi_write(char data);

// timer
void timer_init(void);

// adc
void adc_init( void );

// lcd
void write( char * string, int length );
void placeCursor( unsigned char pos );
void reset_screen();
void createLCDChar();

#endif /* DRIVERS_H_ */
