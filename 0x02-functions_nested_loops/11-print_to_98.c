#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 * @n: is input.
*/
void print_to_98(int n)
{  int i, j;
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
if (i != 98)
printf("%d, ", i);
elseprintf("%d\n", i);
}
}
else
{
for (int j = n; j >= 98; j--)
{
if (j != 98)
printf("%d, ", j);
else
printf("%d\n", j);
}
}
}
