/**************************************************/
/*				Author:Youssef ElGendy			  */
/*				Date: 25-8-2022					  */
/*				Version: 1.0					  */
/*				Module:7_Seg_Program			  */
/**************************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_int.h"
#include "DIO_config.h"
#include "DIO_private.h"

void Seven_Segment_Init (void)
{

	DIO_U8SetPinDirection('A',DIO_U8_PORTA_PIN4,DIO_U8_OUTPUT);		//Set A on 7 segement as output
	DIO_U8SetPinDirection('A',DIO_U8_PORTA_PIN5,DIO_U8_OUTPUT);       //Set B on 7 segement as output
	DIO_U8SetPinDirection('A',DIO_U8_PORTA_PIN6,DIO_U8_OUTPUT);       //Set C on 7 segement as output
	DIO_U8SetPinDirection('A',DIO_U8_PORTA_PIN7,DIO_U8_OUTPUT);       //Set D on 7 segement as output

	DIO_U8SetPinDirection('B',DIO_U8_PORTB_PIN2,DIO_U8_OUTPUT);		//Set EN2 Direction
	DIO_U8SetPinDirection('B',DIO_U8_PORTB_PIN1,DIO_U8_OUTPUT);		//Set EN1 Direction
	}

void Seven_Segment_Enable1(void){
		DIO_VoidSetPinValue('B',DIO_U8_PORTB_PIN2,DIO_U8_HIGH);		//Set EN2 Value

}
void Seven_Segment_Enable2(void){
		DIO_VoidSetPinValue('B',DIO_U8_PORTB_PIN1,DIO_U8_HIGH);		//Set EN2 Value
}
void Seven_Segment_Disable1(void){
		DIO_VoidSetPinValue('B',DIO_U8_PORTB_PIN2,DIO_U8_LOW);		//Disable EN1

}
void Seven_Segment_Disable2(void){
		DIO_VoidSetPinValue('B',DIO_U8_PORTB_PIN1,DIO_U8_LOW);		//Disable EN2
}

void Seven_Segment_Write_Number(u8 Local_U8Number){
		if(Local_U8Number<=9){
			//DCBA
			DIO_VoidSetPinValue('A',DIO_U8_PORTA_PIN4,GET_BIT(Local_U8Number,0));	//A
			DIO_VoidSetPinValue('A',DIO_U8_PORTA_PIN5,GET_BIT(Local_U8Number,1));	//B
			DIO_VoidSetPinValue('A',DIO_U8_PORTA_PIN6,GET_BIT(Local_U8Number,2));	//C
			DIO_VoidSetPinValue('A',DIO_U8_PORTA_PIN7,GET_BIT(Local_U8Number,3));	//D
		}
}
