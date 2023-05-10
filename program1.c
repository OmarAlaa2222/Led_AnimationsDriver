
#define CPU 8000000UL
#include "util/delay.h"
#include "Std_Types.h"
#include "bits_maths.h"

#include "DIO_Interface1.h"
#include "DIO_Private1.h"
#include "DIO_Config1.h"





	void DIO_voidSetPinDirection (u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8PinDirection){

		switch(Copy_u8PortId){

		case(DIO_u8_PORTA):
			if (Copy_u8PinDirection == DIO_u8_OUTPUT){
				SET_BIT(DIO_u8_DDRA_REG,Copy_u8PinId);

			}
			else if(Copy_u8PinDirection == DIO_u8_INPUT){
				CLEAR_BIT(DIO_u8_DDRA_REG,Copy_u8PinId);
			}
		break;

		case(DIO_u8_PORTB):
			if (Copy_u8PinDirection == DIO_u8_OUTPUT){
				SET_BIT(DIO_u8_DDRB_REG,Copy_u8PinId);

			}
			else if(Copy_u8PinDirection == DIO_u8_INPUT){
				CLEAR_BIT(DIO_u8_DDRB_REG,Copy_u8PinId);
			}
		break;

		case(DIO_u8_PORTC):
			if (Copy_u8PinDirection == DIO_u8_OUTPUT){
				SET_BIT(DIO_u8_DDRC_REG,Copy_u8PinId);

			}
			else if(Copy_u8PinDirection == DIO_u8_INPUT){
				CLEAR_BIT(DIO_u8_DDRC_REG,Copy_u8PinId);
			}
		break;

		case(DIO_u8_PORTD):
			if (Copy_u8PinDirection == DIO_u8_OUTPUT){
				SET_BIT(DIO_u8_DDRD_REG,Copy_u8PinId);

			}
			else if(Copy_u8PinDirection == DIO_u8_INPUT){
				CLEAR_BIT(DIO_u8_DDRD_REG,Copy_u8PinId);
			}
		break;


		}


	}


	void DIO_voidSetPinValue (u8 Copy_PortID , u8 Copy_PinID , u8 Copy_u8PinValue){

		switch(Copy_PortID){


		case(DIO_u8_PORTA):
				if (Copy_u8PinValue == DIO_u8_HIGH){
					SET_BIT(DIO_u8_PORTA_REG,Copy_PinID);
				}
				else if (Copy_u8PinValue == DIO_u8_LOW){
					CLEAR_BIT(DIO_u8_PORTA_REG,Copy_PinID);
				}
		break;

		case(DIO_u8_PORTB):
						if (Copy_u8PinValue == DIO_u8_HIGH){
							SET_BIT(DIO_u8_PORTB_REG,Copy_PinID);
						}
						else if (Copy_u8PinValue == DIO_u8_LOW){
							CLEAR_BIT(DIO_u8_PORTB_REG,Copy_PinID);
						}
				break;

		case(DIO_u8_PORTC):
						if (Copy_u8PinValue == DIO_u8_HIGH){
							SET_BIT(DIO_u8_PORTC_REG,Copy_PinID);
						}
						else if (Copy_u8PinValue == DIO_u8_LOW){
							CLEAR_BIT(DIO_u8_PORTC_REG,Copy_PinID);
						}
				break;

		case(DIO_u8_PORTD):
						if (Copy_u8PinValue == DIO_u8_HIGH){
							SET_BIT(DIO_u8_PORTD_REG,Copy_PinID);
						}
						else if (Copy_u8PinValue == DIO_u8_LOW){
							CLEAR_BIT(DIO_u8_PORTD_REG,Copy_PinID);
						}
				break;



		}
	}

	u8  DIO_u8GetPinValue    (u8 Copy_u8PortId, u8 Copy_u8PinId){

		switch(Copy_u8PortId) {
		case(DIO_u8_PORTA):
				return GET_BIT(DIO_u8_PINA_REG,Copy_u8PinId);
		        break;

		case(DIO_u8_PORTB):
				return GET_BIT(DIO_u8_PINB_REG,Copy_u8PinId);
		        break;


		case(DIO_u8_PORTC):
				return GET_BIT(DIO_u8_PINC_REG,Copy_u8PinId);
		        break;


		case(DIO_u8_PORTD):
				return GET_BIT(DIO_u8_PIND_REG,Copy_u8PinId);
		        break;

	}
	}


	void DIO_voidSetPortDirection (u8 Copy_PortID , u8 Copy_u8PortDirection){

		switch(Copy_PortID){

		case(DIO_u8_PORTA):
			if(Copy_u8PortDirection == DIO_u8_OUTPUT){
				DIO_u8_DDRA_REG = 255;
			}
			else if (Copy_u8PortDirection == DIO_u8_INPUT){
				DIO_u8_DDRA_REG = 0;
			}
			break;

		case(DIO_u8_PORTB):
			if(Copy_u8PortDirection == DIO_u8_OUTPUT){
				DIO_u8_DDRB_REG = 255;
			}
			else if (Copy_u8PortDirection == DIO_u8_INPUT){
				DIO_u8_DDRB_REG = 0;
			}
			break;

		case(DIO_u8_PORTC):
			if(Copy_u8PortDirection == DIO_u8_OUTPUT){
				DIO_u8_DDRC_REG = 255;
			}
			else if (Copy_u8PortDirection == DIO_u8_INPUT){
				DIO_u8_DDRC_REG = 0;
			}
			break;

		case(DIO_u8_PORTD):
			if(Copy_u8PortDirection == DIO_u8_OUTPUT){
				DIO_u8_DDRD_REG = 255;
			}
			else if (Copy_u8PortDirection == DIO_u8_INPUT){
				DIO_u8_DDRD_REG = 0;
			}
			break;


		}
	}


		void DIO_voidSetPortValue (u8 Copy_PortID , u8 Copy_u8PortValue){
			switch(Copy_PortID){

			case(DIO_u8_PORTA):
					if (Copy_u8PortValue == DIO_u8_HIGH){
						DIO_u8_PORTA_REG = 255;
					}
					else if (Copy_u8PortValue == DIO_u8_LOW){
						DIO_u8_PORTA_REG = 0;
					}
			break;

			case(DIO_u8_PORTB):
						if (Copy_u8PortValue == DIO_u8_HIGH){
							DIO_u8_PORTB_REG = 255;
						}
						else if (Copy_u8PortValue == DIO_u8_LOW){
							DIO_u8_PORTB_REG = 0;
						}
				break;


			case(DIO_u8_PORTC):
						if (Copy_u8PortValue == DIO_u8_HIGH){
							DIO_u8_PORTC_REG = 255;
						}
						else if (Copy_u8PortValue == DIO_u8_LOW){
							DIO_u8_PORTC_REG = 0;
						}
				break;

			case(DIO_u8_PORTD):
						if (Copy_u8PortValue == DIO_u8_HIGH){
							DIO_u8_PORTD_REG = 255;
						}
						else if (Copy_u8PortValue == DIO_u8_LOW){
							DIO_u8_PORTD_REG = 0;
						}
				break;

			}
		}

		u8 DIO_u8GetPortValue(u8 Copy_PortID){
			switch(Copy_PortID){
			case(DIO_u8_PORTA):
					return DIO_u8_PINA_REG;
			break;

			case(DIO_u8_PORTB):
					return DIO_u8_PINB_REG;
			break;

			case(DIO_u8_PORTC):
					return DIO_u8_PINC_REG;
			break;

			case(DIO_u8_PORTD):
					return DIO_u8_PIND_REG;
			break;
			}
		}



		// Animations Functions

	    void Flash (void){
	    	DIO_voidSetPortDirection ( DIO_u8_PORTA ,DIO_u8_OUTPUT );
	    	DIO_voidSetPortValue ( DIO_u8_PORTA ,DIO_u8_LOW );
		_delay_ms(500);
		DIO_voidSetPortValue ( DIO_u8_PORTA ,DIO_u8_HIGH );
		_delay_ms(500);

	}

	    void Left_Shift(void){
	    	u8 i;
	    	DIO_voidSetPortDirection ( DIO_u8_PORTA ,DIO_u8_OUTPUT );
		for (i=0;i<=7;i++){
			DIO_voidSetPinValue (DIO_u8_PORTA ,i, DIO_u8_HIGH);

			_delay_ms(250);
			DIO_voidSetPinValue (DIO_u8_PORTA ,i, DIO_u8_LOW);
		}
	    }

	    void Right_Shift(void){
	    	u8 i;
	    	DIO_voidSetPortDirection ( DIO_u8_PORTA ,DIO_u8_OUTPUT );
		for (i=7;i>=0;i--){
			DIO_voidSetPinValue (DIO_u8_PORTA ,i, DIO_u8_HIGH);

			_delay_ms(250);
			DIO_voidSetPinValue (DIO_u8_PORTA ,i, DIO_u8_LOW);
		}
	    }

		void Converging (void){
			DIO_voidSetPortDirection ( DIO_u8_PORTA ,DIO_u8_OUTPUT );
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN7, DIO_u8_HIGH);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN6, DIO_u8_HIGH);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN1, DIO_u8_HIGH);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN0, DIO_u8_HIGH);
			_delay_ms(300);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN7, DIO_u8_LOW);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN6, DIO_u8_LOW);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN1, DIO_u8_LOW);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN0, DIO_u8_LOW);

			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN2, DIO_u8_HIGH);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN5, DIO_u8_HIGH);

			_delay_ms(300);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN2, DIO_u8_LOW);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN5, DIO_u8_LOW);

			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN3, DIO_u8_HIGH);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN4, DIO_u8_HIGH);

			_delay_ms(300);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN3, DIO_u8_LOW);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN4, DIO_u8_LOW);

		}


		void Diverging (void){
			DIO_voidSetPortDirection ( DIO_u8_PORTA ,DIO_u8_OUTPUT );

			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN3, DIO_u8_HIGH);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN4, DIO_u8_HIGH);


			_delay_ms(300);

			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN3, DIO_u8_LOW);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN4, DIO_u8_LOW);

			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN2, DIO_u8_HIGH);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN5, DIO_u8_HIGH);


			_delay_ms(300);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN2, DIO_u8_LOW);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN5, DIO_u8_LOW);




			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN7, DIO_u8_HIGH);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN6, DIO_u8_HIGH);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN1, DIO_u8_HIGH);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN0, DIO_u8_HIGH);

			_delay_ms(300);

			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN7, DIO_u8_LOW);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN6, DIO_u8_LOW);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN1, DIO_u8_LOW);
			DIO_voidSetPinValue (DIO_u8_PORTA ,DIO_u8_PIN0, DIO_u8_LOW);


		}

		void Ping_Pong (void){
			u8 i;
			DIO_voidSetPortDirection ( DIO_u8_PORTA ,DIO_u8_OUTPUT );
			for (i=0;i<7;i++){
				DIO_voidSetPinValue (DIO_u8_PORTA ,i, DIO_u8_HIGH);
				_delay_ms(250);
				DIO_voidSetPinValue (DIO_u8_PORTA ,i, DIO_u8_LOW);
				}


		    for (i=7;i>0;i--){

		        DIO_voidSetPinValue (DIO_u8_PORTA ,i, DIO_u8_HIGH);
			    _delay_ms(250);
			    DIO_voidSetPinValue (DIO_u8_PORTA ,i, DIO_u8_LOW);
			  }

		}


		void Incrementing (void){
			u8 i;
			DIO_voidSetPortDirection ( DIO_u8_PORTA ,DIO_u8_OUTPUT );

			DIO_voidSetPortValue (DIO_u8_PORTA , DIO_u8_LOW);


				for (i=0;i<=7;i++){
					DIO_voidSetPinValue (DIO_u8_PORTA ,i, DIO_u8_HIGH);
					_delay_ms(300);
				}
			}


		void Conv_Div (void){
			Converging();
			Diverging();

		}




















