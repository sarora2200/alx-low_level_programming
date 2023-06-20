#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototybe
 *
 * Return: (0) is (success)
*/

int main(void);
{ char str[] = "_putchar";
int b;

for (b = 0; b < 8; b++)
{
_putchar(str[b]);
_putchar('\n');
}
return (0);
}
