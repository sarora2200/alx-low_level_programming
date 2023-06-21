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
{  int count;
unsigned long fib1 = 0, fib2 = 1;
for (count = 0; count < 98; count++)
{
printf("%lu", fib2);
if (count != 97)
printf(", ");
fib2 += fib1;
fib1 = fib2 - fib1;
}
printf("\n");
return (0);
}
