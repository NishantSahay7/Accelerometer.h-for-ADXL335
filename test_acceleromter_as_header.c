/////////////////////////////////////////////////////////////////////////////////////////////////////
///  Project Name : test_acceleromter_as_header
//
//  Target Board : atmega32
//
//  Date Created : 21-07-2017 21:47:15
// 
//  Online Resource  : www.electronicsforstudents.com
//
//  Libraries Included : 
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<avr/io.h>
#include<util/delay.h>


#include "accelerometer.h"
#include "adc.h"
#include "lcd.h"


int main()
{
	lcd_init();	//initializing the LCD
	adc_init();	//initializing the ADC module
	
	accelerometer_init();
	
	int dx,dy,dz;
	
	
	while (1)
	{
	
	
	lcd_gotoxy(0,0);	//0th row,0th coulmn
	lcd_clear();	//clearing the screen of LCD
	
	
	dx=get_degree(1);	//for getting the degree value of x cordinate
	
	dy=get_degree(2);	//for getting the degree value of y cordinate
	
	dz=get_degree(3);	//for getting the degree value of z cordinate

	
	
	lcd_num(dx);	//Printing the degrees value of x cordinate
	
	lcd_string(" ");	//this blank space leaves a gap in between x and y degrees
	
	lcd_num(dy);
	
	lcd_string(" ");
	
	lcd_num(dz);
	
	
	_delay_ms(500);


	}

}