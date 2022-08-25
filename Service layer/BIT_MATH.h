/**************************************************/
/*				Author:Youssef ElGendy			  */	
/*				Date: 14-8-2022					  */
/*				Version: 1.1					  */
/*				Module:BIT_MATH					  */
/**************************************************/
#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(VAR,BIT)					VAR |=(1<<(BIT))
#define TOG_BIT(VAR,BIT)					VAR ^=(1<<(BIT))
#define CLR_BIT(VAR,BIT)					VAR&= ~(1<<(BIT))
#define GET_BIT(VAR,BIT)				   ((VAR>>BIT)&1)
#define SET_PORT(VAR,VALUE)					VAR=VALUE

#define GET_LOW_NIBBLE(VAR)					VAR&=0x0f
#define CLR_LOW_NIBBLE(VAR)					VAR&=0xf0
#define SET_LOW_NIBBLE(VAR)					VAR|=0x0f
#define TOG_LOW_NIBBLE(VAR)					VAR^=0x0f

#define GET_HIGH_NIBBLE(VAR)				VAR=(VAR&0xf0)>>4
#define CLR_HIGH_NIBBLE(VAR)				VAR&=0x0f
#define SET_HIGH_NIBBLE(VAR)				VAR|=0xf0
#define TOG_HIGH_NIBBLE(VAR)				VAR^=0xf0

#define CONC_BIT(A7,A6,A5,A4,A3,A2,A1,A0)	CONC_HELP(A7,A6,A5,A4,A3,A2,A1,A0)
#define CONC_HELP(A7,A6,A5,A4,A3,A2,A1,A0)	0b##A7##A6##A5##A4##A3##A2##A1##A0




#endif