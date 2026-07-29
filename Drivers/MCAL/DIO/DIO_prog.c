/************************************************/
/********* Author: Mikhail medhat *****************/
/********* Date  : ............   *****************/
/********* File: Program File  ...*****************/
/********* File: Program File ... *****************/
/************************************************/
#include "D:\C_PROJECTS\embedead_projects\Drivers\Standerd_libraries\Std_Types.h"
#include "D:\C_PROJECTS\embedead_projects\Drivers\Standerd_libraries\Bit_Math.h"

#include "D:\C_PROJECTS\embedead_projects\Drivers\MCAL\DIO\DIO_int.h"
#include "D:\C_PROJECTS\embedead_projects\Drivers\MCAL\DIO\DIO_private.h"
#include "D:\C_PROJECTS\embedead_projects\Drivers\MCAL\DIO\DIO_config.h"

void  DIO_voidSetPinDirection(u8 PortID, u8 PinID, u8 Direction)
{
    if(PortID>4 && PinID<8)
    {
        if(Direction==OUTPUT)
        {
            switch(PortID)
            {
                case PORTA: SET_BIT(DDRA, PinID); break;
				case PORTB: SET_BIT(DDRB, PinID); break;
				case PORTC: SET_BIT(DDRC, PinID); break;
				case PORTD: SET_BIT(DDRD, PinID); break;
            }

        }
        else if(Direction==INPUT)
        {
                case PORTA: CLR_BIT(DDRA, PinID); break;
				case PORTB: CLR_BIT(DDRA, PinID); break;
				case PORTC: CLR_BIT(DDRA, PinID); break;
				case PORTD: CLR_BIT(DDRA, PinID); break;
        }
        else
        {

        }
    }
    else
    {

    }
}


void DIO_voidSetpinValue(u8 PortID,u8 PinID, u8 Value)
{
    if(PortID>4 && PinID<8)
    {
        if(Value==HIGH)
        {
            switch(PortID)
            {
                case PORTA: SET_BIT(DDRA, PinID); break;
				case PORTB: SET_BIT(DDRB, PinID); break;
				case PORTC: SET_BIT(DDRC, PinID); break;
				case PORTD: SET_BIT(DDRD, PinID); break;
            }

        }
        else if(Value==lOW)
        {
                case PORTA: CLR_BIT(DDRA, PinID); break;
				case PORTB: CLR_BIT(DDRA, PinID); break;
				case PORTC: CLR_BIT(DDRA, PinID); break;
				case PORTD: CLR_BIT(DDRA, PinID); break;
        }
        else
        {

        }
    }
    else
    {

    }
}


u8 DIO_u8GetPinValue(u8 PortID, u8 PinID)
{
	u8 Local_u8PinValue = 0;

	if(PortID < 4 && PinID < 8)
	{
		switch(PortID)
		{
			case PORTA: Local_u8PinValue = GET_BIT(PORTID, PinID); break;
			case PORTB: Local_u8PinValue = GET_BIT(PortID, PinID); break;
			case PORTC: Local_u8PinValue = GET_BIT(PortID, PinID); break;
			case PORTD: Local_u8PinValue = GET_BIT(PortID, PinID); break;
		}
	}

	return Local_u8PinValue;
}


void DIO_voidTogglePin(u8 PortID, u8 PinID)
{
	if(PortID < 4 && PinID < 8)
	{
		switch(PortID)
		{
			case PORTA: TOG_BIT(PORTA, PinID); break;
			case PORTB: TOG_BIT(PORTB, PinID); break;
			case PORTC: TOG_BIT(PORTC, PinID); break;
			case PORTD: TOG_BIT(PORTD, PinID); break;
		}
	}
}


void DIO_voidSetPortDirection(u8 PortID, u8 Direction)
{
	if(PortID < 4)
	{
		switch(PortID)
		{
			case PORTA: DDRA = Direction; break;
			case PORTB: DDRB = Direction; break;
			case PORTC: DDRC = Direction; break;
			case PORTD: DDRD = Direction; break;
		}
	}
}


void DIO_voidSetPortValue(u8 PortID, u8 Value)
{
	if(PortID < 4)
	{
		switch(PortID)
		{
			case PORTA: PORTA = Value; break;
			case PORTB: PORTB = Value; break;
			case PORTC: PORTC = Value; break;
			case PORTD: PORTD = Value; break;
		}
	}
}



