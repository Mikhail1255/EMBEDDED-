/************************************************/
/********* Author: Mikhail Medhat *****************/
/********* Date  : 29/07/2026   *****************/
/********* File  : INTERFACE ***********/
/************************************************/

#ifndef EXTI_INT_H
#define EXTI_INT_H

typedef void (*EXTI_PF)(void);

void EXTI0_voidInit(void);
void EXTI0_voidInterruptEnable(void);
void EXTI0_voidInterruptDisable(void);
void EXTI0_voidSetSignalCriteria(u8 u8SenseMode);
void EXTI0_voidSetCallBack(EXTI_PF FunctionAddress);

void EXTI1_voidInit(void);
void EXTI1_voidInterruptEnable(void);
void EXTI1_voidInterruptDisable(void);
void EXTI1_voidSetSignalCriteria(u8 u8SenseMode);
void EXTI1_voidSetCallBack(EXTI_PF FunctionAddress);

#endif
