/**************************************************/
/*				Author:Youssef ElGendy			  */	
/*				Date: 14-8-2022					  */
/*				Version: 1.1					  */
/*				Module:DIO_INT_H				  */
/**************************************************/

#ifndef		DIO_INT_H
#define 	DIO_INT_H

#define DIO_U8_HIGH 			1
#define	DIO_U8_LOW				0


/**********************************PORTA*******************************************************************/	
#define DIO_U8_PORTA_PIN0				0				//Pin 0
#define DIO_U8_PORTA_PIN1				1				//Pin 1
#define DIO_U8_PORTA_PIN2				2				//Pin 2		Relay
#define DIO_U8_PORTA_PIN3				3				//Pin 3		Buzzer
#define DIO_U8_PORTA_PIN4				4				//Pin 4		7SEGEMENT DISPLAY/ LCD_DATA_LINES
#define DIO_U8_PORTA_PIN5				5				//Pin 5		7SEGEMENT DISPLAY/ LCD_DATA_LINES
#define DIO_U8_PORTA_PIN6				6				//Pin 6		7SEGEMENT DISPLAY/ LCD_DATA_LINES
#define DIO_U8_PORTA_PIN7				7				//Pin 7		7SEGEMENT DISPLAY/ LCD_DATA_LINES
/**********************************PORTB*******************************************************************/	
#define DIO_U8_PORTB_PIN0				0				//Pin 0
#define DIO_U8_PORTB_PIN1				1				//Pin 1		7SEGEMENT DISPLAY/LCD_RS
#define DIO_U8_PORTB_PIN2				2				//Pin 2		7SEGEMENT DISPLAY/LCD_RW
#define DIO_U8_PORTB_PIN3				3				//Pin 3		7SEGEMENT DECIMAL/LCD_E
#define DIO_U8_PORTB_PIN4				4				//Pin 4
#define DIO_U8_PORTB_PIN5				5				//Pin 5
#define DIO_U8_PORTB_PIN6				6				//Pin 6
#define DIO_U8_PORTB_PIN7				7				//Pin 7
/**********************************PORTC*******************************************************************/	
#define DIO_U8_PORTC_PIN0				0				//Pin 0
#define DIO_U8_PORTC_PIN1				1				//Pin 1
#define DIO_U8_PORTC_PIN2				2				//Pin 2		LED0
#define DIO_U8_PORTC_PIN3				3				//Pin 3
#define DIO_U8_PORTC_PIN4				4				//Pin 4
#define DIO_U8_PORTC_PIN5				5				//Pin 5
#define DIO_U8_PORTC_PIN6				6				//Pin 6
#define DIO_U8_PORTC_PIN7				7				//Pin 7		LED1	
/**********************************PORTD*******************************************************************/	
#define DIO_U8_PORTD_PIN0				0				//Pin 0		PB0
#define DIO_U8_PORTD_PIN1				1				//Pin 1
#define DIO_U8_PORTD_PIN2				2				//Pin 2		PB2
#define DIO_U8_PORTD_PIN3				3				//Pin 3		LED3
#define DIO_U8_PORTD_PIN4				4				//Pin 4
#define DIO_U8_PORTD_PIN5				5				//Pin 5
#define DIO_U8_PORTD_PIN6				6				//Pin 6		PB3
#define DIO_U8_PORTD_PIN7				7				//Pin 7




//This function automaticaly SET the DDR directions Based on the data on config
void DIO_Init (void);


void DIO_VoidSetPinValue 		(u8 Copy_u8PortName,u8 Copy_u8Pin,u8 Copy_u8Value);
void DIO_VoidSetPortValue		(u8 Copy_u8PortName,u8 Copy_u8Value);
u8 	 DIO_U8GetPinValue			(u8 Copy_u8Port,u8 Copy_u8Pin);
void DIO_U8SetPinDirection		(u8 Copy_u8PortName,u8 Copy_u8Pin,u8 Copy_u8Value);			//useful in 7Seg and LCD
void DIO_U8SetPortDirection		(u8 Copy_u8PortName,u8 Copy_u8Value);






#endif