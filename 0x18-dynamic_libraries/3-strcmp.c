#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: input string.
 * @s2: input string.
 * Return: the result 0 is the same, less than 0 if taller, more than 0
 * if smaller.
*/
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] == s2[i]; i++)
{
if (s1[i] == '\0')
return (0);
}
return (s1[i] - s2[i]);
}
