#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 *
 * @n: is input
 *
 * Return: (0) is success.
*/
void print_to_98(int n)
{  int n;
for (n = 0; n <= 98; n++)
{
if (n < 98)
printf("%d, ", n);
else
printf("%d", n);
}
printf("\n");
printf("98\n");
int e;
for (e = 111; e >= 98; e--)
{
if (e > 98)
printf("%d, ", e);
else
printf("%d", e);
}
printf("\n");
int b;
for (b = 81; b <= 98; b++)
{
if (b < 98)
printf("%d, ", b);
else
printf("%d", b);
}
printf("\n");
int d;
for (d = -10; d <= 98; d++)
{
if (d < 98)
printf("%d, ", d);
else
printf("%d", d);
}
printf("\n");
return (0);
}
