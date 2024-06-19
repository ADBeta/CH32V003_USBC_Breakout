/******************************************************************************
* A very simple program to test all of the Pins on the breakout board to 
* ensure all pins are soldered correctly.
*
* Attach 1K resitors and LEDs to each of the pins listed in the program.
*
* ADBeta (c)   2024
******************************************************************************/
#include "lib_GPIOCTRL.h"
#include "ch32v003fun.h"
#include <stdio.h>

const gpio_pin_t port_a[] = {GPIO_PA1, GPIO_PA2};
const gpio_pin_t port_c[] = {GPIO_PC0, GPIO_PC1, GPIO_PC2, GPIO_PC3, GPIO_PC4, GPIO_PC5, GPIO_PC6, GPIO_PC7};
// PD1 is SWIO and PD7 is NRST
const gpio_pin_t port_d[] = {GPIO_PD0, GPIO_PD2, GPIO_PD3, GPIO_PD4, GPIO_PD5, GPIO_PD6};


int main()
{
	SystemInit();



	// Setup all the applicable pins
	for(uint8_t pai = 0; pai < 2; pai++) gpio_digital_write(port_a[pai], GPIO_HIGH);
	for(uint8_t pci = 0; pci < 8; pci++) gpio_digital_write(port_c[pci], GPIO_HIGH);
	for(uint8_t pdi = 0; pdi < 6; pdi++) gpio_digital_write(port_d[pdi], GPIO_HIGH);


	while(1)
	{
		/* PORT A */
		for(uint8_t pai = 0; pai < 2; pai++)
		{
			gpio_digital_write(port_a[pai], GPIO_HIGH);
			gpio_set_mode(port_a[pai], OUTPUT_10MHZ_PP);
			Delay_Ms(250);
			gpio_set_mode(port_a[pai], INPUT_FLOATING);
		}


		/* PORT C */
		for(uint8_t pci = 0; pci < 8; pci++)
		{
			gpio_digital_write(port_c[pci], GPIO_HIGH);
			gpio_set_mode(port_c[pci], OUTPUT_10MHZ_PP);
			Delay_Ms(250);
			gpio_set_mode(port_c[pci], INPUT_FLOATING);
		}


		/* PORT D */
		for(uint8_t pdi = 0; pdi < 6; pdi++)
		{
			gpio_digital_write(port_d[pdi], GPIO_HIGH);
			gpio_set_mode(port_d[pdi], OUTPUT_10MHZ_PP);
			Delay_Ms(250);
			gpio_set_mode(port_d[pdi], INPUT_FLOATING);
		}
	}
}
