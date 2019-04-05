/*
 ============================================================================
 Name        : ads1115.c
 Author      : Giovanni Bauermeister
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <fcntl.h>

#include "ads1115_rpi.h"

int main(void) {

	if(openI2CBus("/dev/i2c-1") == -1)
	{
		return EXIT_FAILURE;
	}
	setI2CSlave(0x48);
	while(1)
	{
		printf("CH_0 = %.2f V | ", readVoltage(0));
		printf("CH_1 = %.2f V | ", readVoltage(1));
		printf("CH_2 = %.2f V \n", readVoltage(2));
	}

	return EXIT_SUCCESS;
}
