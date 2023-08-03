#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: input integer.
*/
void print_binary(unsigned long int n)
{
unsigned long int num = 1UL << (sizeof(unsigned long int) * 8 - 1);
int new_num = 0;
while (num > 0)
{
if (n & num)
{
_putchar('1');
new_num = 1;
}
else if (new_num)
{
_putchar('0');
}
num >>= 1;
}
if (!new_num)
_putchar('0');
}
