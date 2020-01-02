/*
 * PWM.c
 *
 * Created: 22-09-2019 10:46:29
 *  Author: iti
 */

#define F_CPU 14745600
#include <avr/io.h>
#include <util/delay.h>



/*void motion_pin_config (void)
{
	DDRA = 0x0F;
	PORTA = 0x00;
	DDRL = 0x18;
	PORTL = 0x18;
}
*/
void port_int(void)
{
	DDRA |=0x0F;
	PORTA &=0xF0;
	DDRL  |=0x18;
	PORTL |=0x18;
}

void forward (void)
{
	PORTA &=0xF0;
	PORTA |=0x06;
}
void stop(void)
{
	PORTA &=0xF0;
	PORTA |=0x00;
}

void timer_init(void)
{
	TCCR5A = 0xA9; //non-inverting
	TCCR5B = 0x0B; //fast pwm
	TCNT5H = 0xFF; //waveform
	TCNT5L = 0x00;
	OCR5AH = 0x00;
	OCR5AL = 0xFF;
	OCR5BH = 0X00;
	OCR5BL = 0XFF;
}

void velocity(unsigned char left,unsigned char right)
{
	OCR5AL = left;
	OCR5BL = right;
}

void circle()
{
	velocity(150,255);
	_delay_ms(17940); //circle
}

void left()
{
	velocity(0,255);
	_delay_ms(1500);
}

void right()
{
	velocity(255,0);
	_delay_ms(1500);
}

void forward_t(int x)
{
	velocity(255,255);
	_delay_ms(x);
}

int main(void)
{
	port_int();
	timer_init();
    while(1)
    {
		circle();
		forward_t(2000);
		left();
		forward_t(1333);
		right();
		forward_t(1333);
		left();
		forward_t(1333);
		left();
		forward_t(1333);
		right();
		forward_t(1333);
		left();
		forward_t(4000);
		left();
		forward_t(1333);
		right();
		forward_t(1333);
		left();
		forward_t(1333);
		left();
		forward_t(1333);
		right();
		forward_t(1333);
		left();
		forward_t(2000);
		stop();
		break;
        //TODO:: Please write your application code
    }

}
