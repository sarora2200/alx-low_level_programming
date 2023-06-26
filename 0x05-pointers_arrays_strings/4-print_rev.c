#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: is input string.
*/
void print_rev(char *s)
{ char *start = s;
char *end = s;
while (*end != '\0')
{
end++;
}
end--;
while (end >= start)
{
_putchar(*end);
end--;
}
_putchar('\n');
}
