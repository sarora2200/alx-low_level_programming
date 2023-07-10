#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input string.
 * Return: NULL if str = NULL, if success returns a pointer to
 * the duplicated string.NULL if insufficient memory was available.
*/
char *_strdup(char *str)
{
char *deo;
unsigned int len, i;
if (str == NULL)
return (NULL);
len = strlen(str) + 1;
deo = malloc(len *sizeof(char));
if (deo == NULL)
return (NULL);
for (i = 0; i < len; i++)
deo[i] = str[i];
return (deo);
}
