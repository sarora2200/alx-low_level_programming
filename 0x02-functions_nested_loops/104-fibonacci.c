#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (success)
*/

int main(void)
{   int count;
unsigned long fib1 = 1, fib2 = 2;
printf("%lu, %lu", fib1, fib2);
for (count = 0; count < 96; count++)
{
fib2 += fib1;
fib1 = fib2 - fib1;
printf(", %lu", fib2);
}
printf("\n");
return (0);
}
