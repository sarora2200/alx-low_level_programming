#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: is an input string.
 * @c: is a charachter to be found.
 * Return: pointer to the first occurrence of the character c in the string s 
 * or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; i < s[i]; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
