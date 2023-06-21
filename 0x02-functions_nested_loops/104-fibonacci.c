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
unsigned long fib1 = 1, fib2 = 2, fib_next;
printf("%lu, %lu", fib1, fib2);
for (count = 3; count <= 98; count++)
{
fib_next = fib1 + fib2;
printf(", %lu", fib_next);
fib1 = fib2;
fib2 = fib_next
}
printf("\n");
return (0);
}
