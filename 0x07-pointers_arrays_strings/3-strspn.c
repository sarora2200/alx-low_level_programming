#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: is input string.
 * @accept: is input string.
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int e;
for (i = 0; s[i] >= '\0'; i++)
{
for (e = 0; accept[e] != s[i]; e++)
{
if (accept[e] == '\0')
{
return (i);
}
}
}
return ('\0');
}
