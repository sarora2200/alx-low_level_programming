#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: is the copied string.
 * @src: is the source string.
 * @n: is the lens of string src.
 * Return: apointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; n > 0; i++, n--)
dest[i] = src[i];
return (dest);
}
