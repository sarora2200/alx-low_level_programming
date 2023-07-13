#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
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
 * @nmemb: is input int.
 * @size: is input int.
 * Return:  newly allocated space in memory
 * If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *str;
if (nmemb == 0 || size == 0)
return (NULL);
str = malloc(nmemb * sizeof(int));
if (str == NULL)
return (NULL);
_memset(str, 0, sizeof(int) * nmemb);
return (str);
}
