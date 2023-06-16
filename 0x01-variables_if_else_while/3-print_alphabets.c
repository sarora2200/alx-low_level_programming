#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
*/

int main(void)
{ char ch = 'a';
char bh = 'A';
for (ch = 97; ch <= 'z'; ch++)
{
putchar(ch);
}
for (bh = 65; bh <= 'Z'; bh++)
{
putchar(bh);
}
printf("\n");
return (0);
}
