#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: is an input string.
 * @b: is output charachter.
 * @n: is input number of charachter b.
 * Return: a pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
