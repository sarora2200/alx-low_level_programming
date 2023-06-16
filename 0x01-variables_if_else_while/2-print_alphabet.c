#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
*/

int main(void)
{ char ch = 'a';
for (ch = 97; ch <= 'z'; ch++)
{
putchar(ch);
}
printf("\n");
return (0);
}
