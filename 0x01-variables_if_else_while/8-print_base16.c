#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print all the numbers of base 16
 *
 * Return: 0 (success)
*/

int main(void)
{ int i = 0;
int g = 10;
for (i = 0; i < 10; i++)
{
putchar(i + 48);
}
for  (g = 10; g < 16; g++)
{
putchar(g + 87);
}
putchar('\n');
return (0);
}
