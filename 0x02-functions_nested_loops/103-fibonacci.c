#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 fibonacci numbers
 *              starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (success)
*/

int main(void)
{  int count;
unsigned long fib1 = 0, fib2 = 1, sum;
for (count = 2; count <= 50 ; count++)
{
sum = fib1 + fib2;
fib1 = fib2;
fib2 = sum;
}
printf("%lu\n", fib1);
return (0);
}
