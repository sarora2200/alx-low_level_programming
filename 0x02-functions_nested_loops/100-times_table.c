#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 *
 * @n: takes number input
*/

void print_times_table(int n)
{  int b, o, e;
if (n <= 15 && n >= 0)
{
for (b = 0; b <= n; b++)
{
_putchar(48);
for (o = 1; o <= n; o++)
{
_putchar(',');
_putchar(' ');
e = b * o;
if (e <= 9)
_putchar(' ');
if (e <= 99)
_putchar(' ');
if (e >= 100)
{
_putchar('0' + (e / 100));
_putchar('0' + (e % 10));
}
else if (e <= 99 && e >= 10)
_putchar('0' + (e / 10));
_putchar('0' + (e % 10));
}
_putchar('\n');
}
}
}
