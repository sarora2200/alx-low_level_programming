#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: number of times to copy b
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n--)
*s++ = b;
return (ptr);
}
/**
 * *_calloc - function that allocates memory for an array, using malloc.
 * @nmemb: array length.
 * @size: size of each element.
 * Return: pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *str;
if (nmemb == 0 || size == 0)
return (NULL);
str = malloc(nmemb * size);
if (str == NULL)
return (NULL);
_memset(str, 0, size * nmemb);
return (str);
}
