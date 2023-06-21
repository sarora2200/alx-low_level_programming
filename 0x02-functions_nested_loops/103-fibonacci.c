#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the sum of even-valued terms in
 *               the Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (success)
*/

int main(void)
{  int count;
unsigned long fib1 = 0, fib2 = 1, sum = 0;
for (count = 2; fib2 <= 4000000; count++)
{
if (fib2 % 2 == 0)
sum += fib2;
fib2 += fib1;
fib1 = fib2 - fib1;
}
printf("%lu\n", sum);
return (0);
}
