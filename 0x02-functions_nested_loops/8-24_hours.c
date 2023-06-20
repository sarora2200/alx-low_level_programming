#include "main.h"
/**
 * jack_bauer - prints minute of the day of Jack Bauer,from 00:00 to 23:59.
*/

void jack_bauer(void)
{ int ab;
int df;
for (ab = 0; ab < 24; ab++)
{
for (df = 0; df < 60; df++)
{
_putchar((ab / 10) + '0');
_putchar((ab % 10) + '0');
_putchar(':');
_putchar((df / 10) + '0');
_putchar((df % 10) + '0');
_putchar('\n');
}
}
}
