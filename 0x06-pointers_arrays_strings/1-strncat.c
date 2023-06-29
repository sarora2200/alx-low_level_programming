#include "main.h"
/**
 * _strncat - function is similar to the _strcat function,
 * except that it will use at most n bytes from src;andsrc does not
 * need to be null-terminated if it contains n or more bytes.
 * @dest: is an input string.
 * @src: is an input string.
 * @n: is an input number of characters.
 * Return: a pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int e;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (e = 0; src[e] != '\0' && e < n; e++)
{
dest[i + e] = src[e];
}
dest[i + e] = '\0';
return (dest);
}
