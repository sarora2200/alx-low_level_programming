#include "main.h"
/**
 * print_square -  function that prints a square, followed by a new line.
 * @size: the size of the square
*/
void print_square(int size)
{
if (size <= 0)
{	
_putchar('\n');
}
else
{
int i, e;
for (i = 1; i <= size; i++)
{
for (e = 1; e <= size; e++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
