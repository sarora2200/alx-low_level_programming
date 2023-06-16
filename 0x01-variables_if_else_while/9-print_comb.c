#include <stdlib.h>

/**
 * main - Entry point
 *
 * description: prints all combinations between single digits
 *
 * Return: 0 (success)
*/

int main(void)
{ int i = 0;
for (i = 0; i =< 9; i++)
{ putchar(i + 48);
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
