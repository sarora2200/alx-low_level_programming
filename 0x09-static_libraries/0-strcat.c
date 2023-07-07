#include "main.h"

/**
 * *_strcat -  function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @dest: an input string.
 * @src: an input string.
 * Return: pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
int i;
int e;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (e = 0; src[e] != '\0'; e++)
{
dest[i + e] = src[e];
}
dest[i + e] = '\0';
return (dest);
}
