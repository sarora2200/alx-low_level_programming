#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: is input string.
 * @accept: is input string.
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
int i;
int e;
for (i = 0; s[i] != '\0'; i++)
{
for (e = 0; accept[e] != '\0'; e++)
{
if (accept[e] == s[i])
return (s + i);
}
}
return ('\0');
}
