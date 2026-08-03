/************************************************/
/********* Author: Mikhail Medhat ***************/
/********* Date  : 03/08/2026     ***************/
/********* File  : EXTI_int.h     ***************/
/************************************************/

#ifndef EXTI_INT_H
#define EXTI_INT_H

/* External Interrupt IDs */
#define EXTI_INT0   0
#define EXTI_INT1   1
#define EXTI_INT2   2

/* Function Prototypes */
void EXTI_voidInit(void);
void EXTI_voidEnable(u8 Int_ID);
void EXTI_voidDisable(u8 Int_ID);

#endif
