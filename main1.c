/*
 * main1.c
 *
 *  Created on: May 9, 2023
 *      Author: Legion
 */

#define CPU 8000000UL
#include "util/delay.h"

#include "bits_maths.h"
#include "Std_Types.h"
#include "DIO_Interface1.h"



int main (void){


	DIO_voidSetPortDirection(DIO_u8_PORTA ,DIO_u8_OUTPUT);
	DIO_voidSetPortDirection(DIO_u8_PORTB ,DIO_u8_INPUT);

	DIO_voidSetPortValue(DIO_u8_PORTB ,DIO_u8_HIGH);




		while (1){

		if (  DIO_u8GetPinValue(DIO_u8_PORTB,DIO_u8_PIN0) == 0) {
			Flash();
		}
		else if (  DIO_u8GetPinValue(DIO_u8_PORTB,DIO_u8_PIN1) == 0){
			Left_Shift();
		}

		else if   (  DIO_u8GetPinValue(DIO_u8_PORTB,DIO_u8_PIN2) == 0){
			Right_Shift();
		}

		else if (  DIO_u8GetPinValue(DIO_u8_PORTB,DIO_u8_PIN3) == 0){
			Converging();

		}

		else if (  DIO_u8GetPinValue(DIO_u8_PORTB,DIO_u8_PIN4) == 0){
			Diverging();

		}

		else if (  DIO_u8GetPinValue(DIO_u8_PORTB,DIO_u8_PIN5) == 0){

			Ping_Pong();
		}

		else if (  DIO_u8GetPinValue(DIO_u8_PORTB,DIO_u8_PIN6) == 0){
			Incrementing();
		}

		else if (  DIO_u8GetPinValue(DIO_u8_PORTB,DIO_u8_PIN7) == 0) {
			Conv_Div();
		}

	}












return 0;
}
