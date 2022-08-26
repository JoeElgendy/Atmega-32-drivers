/**************************************************/
/*				Author:Youssef ElGendy			  */
/*				Date: 26-8-2022					  */
/*				Version: 1.0					  */
/*				Module:LCD_Config				  */
/**************************************************/
#ifndef LCD_CONFIG_H
#define LCD_CONFIG_H


//Initalize_CODE is taken from DATASHEET



/*Display_Config is taken from DATASHEET
should be 1DCB0000;
options:
D:0 --> Display OFF
D:1 --> Display ON
C:0 --> Cursor OFF
C:1 --> Cursor ON
B:0 --> Blink OFF
B:1 --> Blink ON 
*/

#define Display_Config	0xF0



/*Entry_Mode_Config is taken from DATASHEET
should be 0-1-I/D-SH-0-0-0-0;
Where:
I/D:0 ---> 
I/D:1 --->Increment Mode related to address counter
SH:0  ---> No Display Shift Operation //Related to internal
SH:1  ---> */

#define	Entry_Mode_Config 	0x60






#endif