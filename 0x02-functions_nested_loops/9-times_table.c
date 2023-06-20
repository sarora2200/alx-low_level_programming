#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{ int n, b, e;
for (n = 0; n <= 9; n++)
{
for (b = 0; b <= 9; b++)
{
e = n * b;
if (b == 0)
{
putchar(e + '0');
}
if (e < 10 && b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(e + '0');
}
else if (e >= 10)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (e / 10));
_putchar('0' + (e % 10));
}
}
_putchar('\n');
}
}

