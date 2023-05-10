/*
 * DIO_Interface1.h
 *
 *  Created on: May 9, 2023
 *      Author: Legion
 */

#ifndef DIO_INTERFACE1_H_
#define DIO_INTERFACE1_H_

#define DIO_u8_PORTA 0
#define DIO_u8_PORTB 1
#define DIO_u8_PORTC 2
#define DIO_u8_PORTD 3


#define DIO_u8_PIN0 0
#define DIO_u8_PIN1 1
#define DIO_u8_PIN2 2
#define DIO_u8_PIN3 3
#define DIO_u8_PIN4 4
#define DIO_u8_PIN5 5
#define DIO_u8_PIN6 6
#define DIO_u8_PIN7 7


#define DIO_u8_OUTPUT 1
#define DIO_u8_INPUT 0

#define DIO_u8_HIGH 1
#define DIO_u8_LOW 0




void DIO_voidSetPinDirection (u8 Copy_PortID , u8 Copy_PinID , u8 Copy_u8PinDirection);

void DIO_voidSetPinValue (u8 Copy_PortID , u8 Copy_PinID , u8 Copy_u8PinValue);

u8 DIO_u8GetPinValue(u8 Copy_PortID , u8 Copy_PinID);

void DIO_voidSetPortDirection (u8 Copy_PortID , u8 Copy_u8PortDirection);

void DIO_voidSetPortValue (u8 Copy_PortID , u8 Copy_u8PortValue);


u8 DIO_u8GetPortValue(u8 Copy_PortID);

#endif /* DIO_INTERFACE1_H_ */
