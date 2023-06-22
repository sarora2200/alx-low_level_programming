#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print
 * Fizz instead of the number and for the multiples of five print
 * Buzz. For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0 is (success).
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
int m = i % 3;
int o = i % 5;
if (m == 0 && o != 0)
{
printf("Fizz ");
}
else if (o == 0 && m != 0)
{
printf("Buzz ");
}
else if (m == 0 && o == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
printf("\n");
}
return (0);
}
