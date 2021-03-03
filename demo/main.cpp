#include "mbed.h"

DigitalOut led3(LED3);
DigitalOut led1(LED1);

void Led(DigitalOut &ledpin, int i);

int main(void)
{
	led3 = 1;
	led1 = 0;
	while(1) {
		Led(led3, 6);
		Led(led1, 4);
	}
}

void Led(DigitalOut &ledpin, int times)
{
	for (int i = 0; i < times; i++) {
		ledpin = !ledpin;
		ThisThread::sleep_for(100ms);
	}
}
