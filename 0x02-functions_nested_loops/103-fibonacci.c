#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50th fibonacci number followed by new line.
 *
 * Return: Always 0 (success)
*/

int main(void)
{  int count;
unsigned long fib1 = 0, fib2 = 1, sum;
for (count = 2; count < 50; count++)
{
sum = fib1 + fib2;
fib1 = fib2;
fib2 = sum;
}
printf("%lu\n", fib1);
return (0);
}
