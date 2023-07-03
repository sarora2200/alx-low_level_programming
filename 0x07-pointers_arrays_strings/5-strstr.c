#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: is an input string.
 * @needle: is an input string.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
int i;
int e;
for (i = 0; haystack[i] != '\0'; i++)
{
for (e = 0; haystack[i] == needle[e]; e++)
if (haystack[i] != '\0')
return (haystack + i);
}
return ('\0');
}
