/*Abu Naser Md. Moinuddin */

/**
	@author Thomas Grunenberg
	@version 0.1
	@file one.c
	@brief Microcontroller retake
*/

/**
	@brief The CPU speed in Hz
*/
#define F_CPU 8000000UL


/******************************************************************************/
/* INCLUDED FILES                                                             */
/******************************************************************************/
#include <avr/io.h>
#include "init.h"
#include "lcd.h"
/******************************************************************************/


/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/**
	@brief Main function
	@return only a dummy to avoid a compiler warning, not used
*/
int main(void){

	lcd_init(); // Function to initialise LCD display
	init(); 	// Function to initialise I/Os
	
	lcd_clear();
	lcd_string("Retake:");
	lcd_setcursor(0,2);
	lcd_string("first step ok");
	while (1) 	// Loop forever
	{
		
	}
	return 0;
}
/******************************************************************************/

