#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: is input string.
*/
void puts2(char *str)
{  _putchar('0');
while (*str != '\0')
{
str = str + 2;
_putchar(*str);
}
_putchar('\n');
}
