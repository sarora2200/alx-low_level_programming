#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: function that checks for uppercase character.
 *
 * @c: is input character
 *
 * Return: 0 is (success).
*/

int _isupper(c)
{  if
(c >= 'A' && c <= 'Z')
_putchar(c);
_putchar(':');
_putchar(' ');
_putchar(1);
_putchar('\n');
else
_putchar(c);
_putchar(':');
_putchar(' ');
_putchar(0);
_putchar('\n');
return (0);
}
