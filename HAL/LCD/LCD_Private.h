/**************************************************/
/*				Author:Youssef ElGendy			  */
/*				Date: 26-8-2022					  */
/*				Version: 1.0					  */
/*				Module:LCD_Interface			  */
/**************************************************/

#ifndef LCD_PRIVATE_H
#define LCD_PRIVATE_H

#define RS			DIO_U8_PORTB_PIN1
#define RW			DIO_U8_PORTB_PIN2
#define E 			DIO_U8_PORTB_PIN3
#define LCD_D4		DIO_U8_PORTA_PIN4
#define LCD_D5  	DIO_U8_PORTA_PIN5
#define LCD_D6  	DIO_U8_PORTA_PIN6
#define LCD_D7  	DIO_U8_PORTA_PIN7

//Initalize_CODE is taken from DATASHEET
#define Initalize_CODE 		0x00
#define Function_SET_Code	0x20
#define Display_On_Code		0x00
#define Display_Clear 	0x10			

/*NF is taken from DATASHEET 
Options:
N:0  ---> 1 Line Display
N:1  ---> 2 Line Display
F:0	 ---> 5*7  dots
F:1  ---> 5*10 dots
the value sent should equal to NF000000
in our case 2Line , 5*7 Dots 
10000000	= 80 HEX */

#define NF				0x80	

#endif