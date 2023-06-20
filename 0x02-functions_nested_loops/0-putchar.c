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
int ch;

for (ch = 0; ch < 8; ch++)
_putchar(str[ch]);
_putchar('\n');
return (0);
}
