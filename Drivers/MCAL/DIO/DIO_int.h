#ifndef DIO_INT_H
#define DIO_ENT_H



#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3


#define    PIN0                0
#define    PIN1                1
#define    PIN2                2
#define    PIN3                3
#define    PIN4                4
#define    PIN5                5
#define    PIN6                6
#define    PIN7                7

#define    OUTPUT              1
#define    INPUT               0

#define    HIGH                1
#define    lOW                 0

#define PORTA              0
#define PORTB              1
#define PORTC              2
#define PORTD              3

/**set input or output**/
void  DIO_voidSetPinDirection(u8 PortID, u8 PinID, u8 Direction);
/** Output Mode HIGH OR LOW **/
void DIO_voidSetpinValue(u8 PortID,u8 PinID, u8 Value);
/** Input Mode**/
u8 DIO_u8GetPinValue(u8 PortID, u8 PinID);
/**output mode**/
void DIO_voidTogglePin(u8 PortID, u8 PinID);
/** output - input**/
void DIO_voidSetPortDirection(u8 PortID, u8 Direction);
/** High - Low**/
void DIO_voidSetPortValue(u8 PortID, u8 Value);


#endif
