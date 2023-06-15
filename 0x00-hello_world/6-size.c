#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{ char (c) = 0;
int (i) = 0;
long int (l) = 00000;
long long int (ll) = 00000000000000000000;
float (f) = 0.00;
printf("size of a char is %u byte(s)\n", sizeof(char));
printf("size of a int is %u byte(s)\n", sizeof(int));
printf("size of a long int is %u byte(s)\n", sizeof(long int));
printf("size of a long long int is %u byte(s)\n", sizeof(long long int));
printf("size of a float is %u byte(s)\n", sizeof(float));

return (0);
}

