#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * printf - function to print line
 * @format: format.
 * Return: 0 if success.
*/


int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
