/**************************************************/
/*				Author:Youssef ElGendy			  */	
/*				Date: 14-8-2022					  */
/*				Version: 1.1					  */
/*				Module:DIO_config				  */
/**************************************************/

#ifndef DIO_CONFIG_H
#define DIO_CONFIG_H

/*Definition:Pin initial Direction*/
/*Range:DIO_U8_INPUT OR DIO_U8_OUTPUT*/

/**********************************PORTA*******************************************************************/	
#define DIO_U8_PORTA_PIN0_DIR				DIO_U8_INPUT	//Pin 0
#define DIO_U8_PORTA_PIN1_DIR				DIO_U8_INPUT	//Pin 1
#define DIO_U8_PORTA_PIN2_DIR				DIO_U8_INPUT	//Pin 2		Relay
#define DIO_U8_PORTA_PIN3_DIR				DIO_U8_INPUT	//Pin 3		Buzzer
#define DIO_U8_PORTA_PIN4_DIR				DIO_U8_INPUT	//Pin 4		7SEGEMENT DISPLAY/ LCD_DATA_LINES
#define DIO_U8_PORTA_PIN5_DIR				DIO_U8_INPUT	//Pin 5		7SEGEMENT DISPLAY/ LCD_DATA_LINES
#define DIO_U8_PORTA_PIN6_DIR				DIO_U8_INPUT	//Pin 6		7SEGEMENT DISPLAY/ LCD_DATA_LINES
#define DIO_U8_PORTA_PIN7_DIR				DIO_U8_INPUT	//Pin 7		7SEGEMENT DISPLAY/ LCD_DATA_LINES
/**********************************PORTB*******************************************************************/	
#define DIO_U8_PORTB_PIN0_DIR				DIO_U8_INPUT	//Pin 0
#define DIO_U8_PORTB_PIN1_DIR				DIO_U8_INPUT	//Pin 1		7SEGEMENT DISPLAY/LCD_RS
#define DIO_U8_PORTB_PIN2_DIR				DIO_U8_INPUT	//Pin 2		7SEGEMENT DISPLAY/LCD_RW
#define DIO_U8_PORTB_PIN3_DIR				DIO_U8_INPUT	//Pin 3		7SEGEMENT DECIMAL/LCD_E
#define DIO_U8_PORTB_PIN4_DIR				DIO_U8_INPUT	//Pin 4
#define DIO_U8_PORTB_PIN5_DIR				DIO_U8_INPUT	//Pin 5
#define DIO_U8_PORTB_PIN6_DIR				DIO_U8_INPUT	//Pin 6
#define DIO_U8_PORTB_PIN7_DIR				DIO_U8_INPUT	//Pin 7
/**********************************PORTC*******************************************************************/	
#define DIO_U8_PORTC_PIN0_DIR				DIO_U8_INPUT	//Pin 0
#define DIO_U8_PORTC_PIN1_DIR				DIO_U8_INPUT	//Pin 1
#define DIO_U8_PORTC_PIN2_DIR				DIO_U8_INPUT	//Pin 2		LED0
#define DIO_U8_PORTC_PIN3_DIR				DIO_U8_INPUT	//Pin 3
#define DIO_U8_PORTC_PIN4_DIR				DIO_U8_INPUT	//Pin 4
#define DIO_U8_PORTC_PIN5_DIR				DIO_U8_INPUT	//Pin 5
#define DIO_U8_PORTC_PIN6_DIR				DIO_U8_INPUT	//Pin 6
#define DIO_U8_PORTC_PIN7_DIR				DIO_U8_INPUT	//Pin 7		LED1	
/**********************************PORTD*******************************************************************/	
#define DIO_U8_PORTD_PIN0_DIR				DIO_U8_INPUT	//Pin 0		PB0
#define DIO_U8_PORTD_PIN1_DIR				DIO_U8_INPUT	//Pin 1
#define DIO_U8_PORTD_PIN2_DIR				DIO_U8_INPUT	//Pin 2		PB2
#define DIO_U8_PORTD_PIN3_DIR				DIO_U8_INPUT	//Pin 3		LED3
#define DIO_U8_PORTD_PIN4_DIR				DIO_U8_INPUT	//Pin 4
#define DIO_U8_PORTD_PIN5_DIR				DIO_U8_INPUT	//Pin 5
#define DIO_U8_PORTD_PIN6_DIR				DIO_U8_INPUT	//Pin 6		PB3
#define DIO_U8_PORTD_PIN7_DIR				DIO_U8_INPUT	//Pin 7


/*PIN Initial Value*/
/*Range:DIO_u8_HIGH or DIO_u8_LOW*/

/**********************************PORTA*******************************************************************/	
#define DIO_U8_PORTA_PIN1_InitVal				DIO_u8_LOW	//Pin 1
#define DIO_U8_PORTA_PIN0_InitVal				DIO_u8_LOW	//Pin 0
#define DIO_U8_PORTA_PIN2_InitVal				DIO_u8_LOW	//Pin 2		Relay
#define DIO_U8_PORTA_PIN3_InitVal				DIO_u8_LOW	//Pin 3		Buzzer
#define DIO_U8_PORTA_PIN4_InitVal				DIO_u8_LOW	//Pin 4		7SEGEMENT DISPLAY/ LCD_DATA_LINES
#define DIO_U8_PORTA_PIN5_InitVal				DIO_u8_LOW	//Pin 5		7SEGEMENT DISPLAY/ LCD_DATA_LINES
#define DIO_U8_PORTA_PIN6_InitVal				DIO_u8_LOW	//Pin 6		7SEGEMENT DISPLAY/ LCD_DATA_LINES
#define DIO_U8_PORTA_PIN7_InitVal				DIO_u8_LOW	//Pin 7		7SEGEMENT DISPLAY/ LCD_DATA_LINES
/**********************************PORTB*******************************************************************/	
#define DIO_U8_PORTB_PIN0_InitVal				DIO_u8_LOW	//Pin 0
#define DIO_U8_PORTB_PIN1_InitVal				DIO_u8_LOW	//Pin 1		7SEGEMENT DISPLAY/LCD_RS
#define DIO_U8_PORTB_PIN2_InitVal				DIO_u8_LOW	//Pin 2		7SEGEMENT DISPLAY/LCD_RW
#define DIO_U8_PORTB_PIN3_InitVal				DIO_u8_LOW	//Pin 3		7SEGEMENT DECIMAL/LCD_E
#define DIO_U8_PORTB_PIN4_InitVal				DIO_u8_LOW	//Pin 4
#define DIO_U8_PORTB_PIN5_InitVal				DIO_u8_LOW	//Pin 5
#define DIO_U8_PORTB_PIN6_InitVal				DIO_u8_LOW	//Pin 6
#define DIO_U8_PORTB_PIN7_InitVal				DIO_u8_LOW	//Pin 7
/**********************************PORTC*******************************************************************/	
#define DIO_U8_PORTC_PIN0_InitVal				DIO_u8_LOW	//Pin 0
#define DIO_U8_PORTC_PIN1_InitVal				DIO_u8_LOW	//Pin 1
#define DIO_U8_PORTC_PIN2_InitVal				DIO_u8_LOW	//Pin 2		LED0
#define DIO_U8_PORTC_PIN3_InitVal				DIO_u8_LOW	//Pin 3
#define DIO_U8_PORTC_PIN4_InitVal				DIO_u8_LOW	//Pin 4
#define DIO_U8_PORTC_PIN5_InitVal				DIO_u8_LOW	//Pin 5
#define DIO_U8_PORTC_PIN6_InitVal				DIO_u8_LOW	//Pin 6
#define DIO_U8_PORTC_PIN7_InitVal				DIO_u8_LOW	//Pin 7		LED1	
/**********************************PORTD*******************************************************************/	
#define DIO_U8_PORTD_PIN0_InitVal				DIO_u8_LOW	//Pin 0		PB0
#define DIO_U8_PORTD_PIN1_InitVal				DIO_u8_LOW	//Pin 1
#define DIO_U8_PORTD_PIN2_InitVal				DIO_u8_LOW	//Pin 2		PB2
#define DIO_U8_PORTD_PIN3_InitVal				DIO_u8_LOW	//Pin 3		LED3
#define DIO_U8_PORTD_PIN4_InitVal				DIO_u8_LOW	//Pin 4
#define DIO_U8_PORTD_PIN5_InitVal				DIO_u8_LOW	//Pin 5
#define DIO_U8_PORTD_PIN6_InitVal				DIO_u8_LOW	//Pin 6		PB3
#define DIO_U8_PORTD_PIN7_InitVal				DIO_u8_LOW	//Pin 7

#endif