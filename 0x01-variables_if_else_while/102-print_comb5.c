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
int f = 0;
for (i = 0; i <= 9; i++)
{
for (e = 0; e <= 9; e++)
{
for (b = 0; b <= 9; b++)
{
for (f = 0; f <= 9; f++)
{
if (i + e != b + f)
if (i + e < b + f)
{
putchar(i + 48);
putchar(e + 48);
putchar(' ');
putchar(b + 48);
putchar(f + 48);
if (i + e != 98 || b + f != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
