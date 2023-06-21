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
unsigned long long fib1 = 0, fib2 = 1, sum;
for (count = 0; count < 49 ; count++)
{
sum = fib1 + fib2;
printf("%llu, ", sum);
fib1 = fib2;
fib2 = sum;
}
sum = fib1 + fib2;
printf("%llu\n", sum);
return (0);
}
