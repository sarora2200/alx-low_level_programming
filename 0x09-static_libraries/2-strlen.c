#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: is input string.
 * Return: length of string.
*/
int _strlen(char *s)
{ int n;
for (n = 0; *s != '\0'; s++)
n++;
return (n);
}
