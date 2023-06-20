#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase.
 * followed by a new line.
*/

void print_alphabet_x10(void)
{ int e;
for (e = 0; e < 10; e++)
{
char b;
for (b = 'a'; b <= 'z'; b++)
_putchar(b);
_putchar('\n');
}
}

