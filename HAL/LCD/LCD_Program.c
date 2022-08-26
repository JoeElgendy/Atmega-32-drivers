/**************************************************/
/*				Author:Youssef ElGendy			  */
/*				Date: 26-8-2022					  */
/*				Version: 1.0					  */
/*				Module:LCD_Program				  */
/**************************************************/
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_int.h"
#include "DIO_config.h"
#include "DIO_private.h"
#include "LCD_Private.h"
#include "LCD_Config.h"
#include "LCD_Interface.h"
#define F_CPU 16000000UL
#include <util/delay.h>


static u8 InitStepFinished=0;

void LCD_VoidInit(void){
		DIO_U8SetPortDirection('A',OUTPUT);
		DIO_U8SetPortDirection('B',OUTPUT);
		//To Disable buzzer and relay
		DIO_VoidSetPinValue('A',DIO_U8_PORTA_PIN3,DIO_U8_LOW);
		DIO_VoidSetPinValue('A',DIO_U8_PORTA_PIN2,DIO_U8_LOW);
		
	//4 bit mode 
	_delay_ms(30);
	
	LCD_U8WriteCmd(Function_SET_Code);
	LCD_U8WriteCmd(Function_SET_Code);
	LCD_U8WriteCmd(NF);
	_delay_ms(1);
	
	LCD_U8WriteCmd(Initalize_CODE);
	LCD_U8WriteCmd(Display_Config);
	_delay_ms(1);
	
	LCD_U8WriteCmd(Initalize_CODE);
	LCD_U8WriteCmd(Display_Clear);
	_delay_ms(2);
	
	LCD_U8WriteCmd(Initalize_CODE);
	LCD_U8WriteCmd(Entry_Mode_Config);
	_delay_ms(2);

	
	InitStepFinished=1;
}

void LCD_U8WriteCmd(u8 Cmd){
	//Cmd 0000 0000
	DIO_VoidSetPinValue ('B',RS,DIO_U8_LOW ); 
	DIO_VoidSetPinValue ('B',RW,DIO_U8_LOW );	

	DIO_VoidSetPinValue ('A',LCD_D4,GET_BIT(Cmd,4));
	DIO_VoidSetPinValue ('A',LCD_D5,GET_BIT(Cmd,5) );
	DIO_VoidSetPinValue ('A',LCD_D6,GET_BIT(Cmd,6) );
	DIO_VoidSetPinValue ('A',LCD_D7,GET_BIT(Cmd,7) );
											
	//falling edge                          
	DIO_VoidSetPinValue ('B',E,DIO_U8_HIGH);
											
	_delay_ms(1);                           
											
	DIO_VoidSetPinValue ('B',E,DIO_U8_LOW); 
											
	if(InitStepFinished){				    
	DIO_VoidSetPinValue ('A',LCD_D4,GET_BIT(Cmd,0));
	DIO_VoidSetPinValue ('A',LCD_D5,GET_BIT(Cmd,1));
	DIO_VoidSetPinValue ('A',LCD_D6,GET_BIT(Cmd,2));
	DIO_VoidSetPinValue ('A',LCD_D7,GET_BIT(Cmd,3));
	//falling edge
	DIO_VoidSetPinValue ('B',E,DIO_U8_HIGH);
	
	_delay_ms(1);
	
	DIO_VoidSetPinValue ('B',E,DIO_U8_LOW);}
	//execution time
	_delay_ms(2);}
	
void LCD_U8WriteData(u8 Data){
	DIO_VoidSetPinValue ('B',RS,DIO_U8_HIGH ); 
    DIO_VoidSetPinValue ('B',RW,DIO_U8_LOW );	
    
    DIO_VoidSetPinValue ('A',LCD_D4,GET_BIT(Data,4));
    DIO_VoidSetPinValue ('A',LCD_D5,GET_BIT(Data,5) );
    DIO_VoidSetPinValue ('A',LCD_D6,GET_BIT(Data,6) );
    DIO_VoidSetPinValue ('A',LCD_D7,GET_BIT(Data,7) );
    										
    //falling edge                          
    DIO_VoidSetPinValue ('B',E,DIO_U8_HIGH);
    										
    _delay_ms(1);                           
    										
    DIO_VoidSetPinValue ('B',E,DIO_U8_LOW); 
    														    
    DIO_VoidSetPinValue ('A',LCD_D4,GET_BIT(Data,0));
    DIO_VoidSetPinValue ('A',LCD_D5,GET_BIT(Data,1));
    DIO_VoidSetPinValue ('A',LCD_D6,GET_BIT(Data,2));
    DIO_VoidSetPinValue ('A',LCD_D7,GET_BIT(Data,3));
    //falling edge
    DIO_VoidSetPinValue ('B',E,DIO_U8_HIGH);
    
    _delay_ms(1);
    
    DIO_VoidSetPinValue ('B',E,DIO_U8_LOW);
    //execution time
    _delay_ms(2);}
	
void LCD_WriteString(u8* Str){
	u8 index=0;
	while(Str[index] != '\0'){
		LCD_U8WriteData(Str[index]);
	index++;
	}
}

/*void LCD_GoTo(u8 Row,u8 Column){
	u8 address;
	if(Row<2 && Column<16){
		address=(Row*0x40)+Column;
		
	}
}*/ // uncompleted