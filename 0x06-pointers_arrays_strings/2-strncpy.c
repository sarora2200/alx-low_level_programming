#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: an input string.
 * @src: an input string.
 * @n: an input number.
 * Return: the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
