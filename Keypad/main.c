/*
 * @file main.c
 *
 * @brief Main source code for the Keypad program.
 *
 * This file contains the main entry point and function definitions for the Keypad program.
 *
 * @author Aaron Nanas
 */

#include "TM4C123GH6PM.h"
#include "SysTick_Delay.h"
#include "GPIO.h"
#include "UART0.h"

void Decode_EduBase_Keypad(uint8_t edubase_keypad_status);

int main(void)
{
	SysTick_Delay_Init();
	
	EduBase_LEDs_Init();
	
	EduBase_Keypad_Init();
	
	UART0_Init();
	
	while(1)
	{
		uint8_t EduBase_Keypad_Status = Get_EduBase_Keypad_Status();
		EduBase_LEDs_Output(EduBase_Keypad_Status);
		Decode_EduBase_Keypad(EduBase_Keypad_Status);
	}
}

void Decode_EduBase_Keypad(uint8_t edubase_keypad_status)
{
	switch(edubase_keypad_status)
	{		
		case 1:
		{
			UART0_Output_String("KEY0 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 2:
		{
			UART0_Output_String("KEY1 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 3:
		{
			UART0_Output_String("KEY2 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 4:
		{
			UART0_Output_String("KEY3 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 5:
		{
			UART0_Output_String("KEY4 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 6:
		{
			UART0_Output_String("KEY5 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 7:
		{
			UART0_Output_String("KEY6 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 8:
		{
			UART0_Output_String("KEY7 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 9:
		{
			UART0_Output_String("KEY8 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 10:
		{
			UART0_Output_String("KEY9 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 11:
		{
			UART0_Output_String("KEY10 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 12:
		{
			UART0_Output_String("KEY11 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 13:
		{
			UART0_Output_String("KEY12 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 14:
		{
			UART0_Output_String("KEY13 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 15:
		{
			UART0_Output_String("KEY14 Pressed");
			UART0_Output_Newline();
			break;
		}
		
		case 16:
		{
			UART0_Output_String("KEY15 Pressed");
			UART0_Output_Newline();
			break;
		}
	}
}