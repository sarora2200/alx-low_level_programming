#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers starting from 0
 *
 * Return: 0 (success)
*/

int main(void)
{ int i = 0;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
