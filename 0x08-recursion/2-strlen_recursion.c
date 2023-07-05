#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: a pointer to input string.
 * Return: the string length.
*/
int _strlen_recursion(char *s)
{
int i = 0;
if (s[i] != '\0')
{
i = 1 + _strlen_recursion(s + 1);
}
return (i);
}
