/**************************************************/
/*				Author:Youssef ElGendy			  */
/*				Date: 25-8-2022					  */
/*				Version: 1.0					  */
/*				Module:7_Seg_Interface			  */
/**************************************************/

#ifndef SEVEN_SEGMENT_INTERFACE_H
#define SEVEN_SEGMENT_INTERFACE_H

void Seven_Segment_Init (void);
void Seven_Segment_Write_Number (u8 Local_U8Number);
void Seven_Segment_Enable1(void);
void Seven_Segment_Enable2(void);
void Seven_Segment_Disable1(void);
void Seven_Segment_Disable2(void);

#endif