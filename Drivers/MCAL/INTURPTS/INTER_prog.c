/************************************************/
/********* Author: Mikhail Medhat *****************/
/********* Date  : 29/07/2026   *****************/
/********* File  : program ***********/
/************************************************/

#include "Std_Types.h"
#include "Bit_Math.h"
#include <avr/io.h>
#include <avr/interrupt.h>

#include "INTER_int.h"
#include "INTER_config.h"

static EXTI_PF EXTI0_pfCallBack = 0;
static EXTI_PF EXTI1_pfCallBack = 0;

void EXTI0_voidInit(void)
{
	EXTI0_voidSetSignalCriteria(EXTI_FALLING_EDGE); /* default: falling edge */
	CLR_BIT(GICR, 6);   /* start disabled */
	CLR_BIT(GIFR, 6);   /* clear any stale flag */
}

void EXTI0_voidInterruptEnable(void)  { SET_BIT(GICR, 6); }
void EXTI0_voidInterruptDisable(void) { CLR_BIT(GICR, 6); }

void EXTI0_voidSetSignalCriteria(u8 u8SenseMode)
{
	MCUCR &= ~(0b11);              /* clear ISC01:ISC00 */
	MCUCR |=  (u8SenseMode & 0b11);
}

void EXTI0_voidSetCallBack(EXTI_PF FunctionAddress)
{
	EXTI0_pfCallBack = FunctionAddress;
}

ISR(INT0_vect)
{
	if(EXTI0_pfCallBack != 0)
	{
		EXTI0_pfCallBack();
	}
}

/* ---- INT1: identical pattern, different bit positions ---- */

void EXTI1_voidInit(void)
{
	EXTI1_voidSetSignalCriteria(EXTI_FALLING_EDGE);
	CLR_BIT(GICR, 7);
	CLR_BIT(GIFR, 7);
}

void EXTI1_voidInterruptEnable(void)  { SET_BIT(GICR, 7); }
void EXTI1_voidInterruptDisable(void) { CLR_BIT(GICR, 7); }

void EXTI1_voidSetSignalCriteria(u8 u8SenseMode)
{
	MCUCR &= ~(0b11 << 2);                 /* clear ISC11:ISC10 */
	MCUCR |=  ((u8SenseMode & 0b11) << 2);
}

void EXTI1_voidSetCallBack(EXTI_PF FunctionAddress)
{
	EXTI1_pfCallBack = FunctionAddress;
}

ISR(INT1_vect)
{
	if(EXTI1_pfCallBack != 0)
	{
		EXTI1_pfCallBack();
	}
}
