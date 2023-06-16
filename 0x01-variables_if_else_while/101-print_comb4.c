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
int b = 0;
for (i = 0; i <= 9; i++)
{
for (e = 0; e <= 9; e++)
{
for (b = 0; b <= 9; b++)
if (i != e && i < e)
if (e != b && e < b)
if (i != b && i < b)
{
putchar(i + 48);
putchar(e + 48);
putchar(b + 48);
if (i + e + b != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

