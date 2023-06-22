#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
*/
void more_numbers(void)
{
int i, e;
for (i = 0; i < 10; i++)
{
for (e = 0; e <= 14; e++)
{
if (e >= 10)
_putchar(1 + 48);
_putchar((e % 10) + 48);
}
_putchar('\n');
}
}
