#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print compinations of two digits
 *
 * Return: 0 (success)
*/

int main(void)
{ int i = 0;
int e = 0;
for (i = 0; i <= 9; i++)
{
for (e = 0; e <= 9; e++)
if (i != e && i < e)
{
putchar(i + 48);
putchar(e + 48);
if (i + e != 17)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
