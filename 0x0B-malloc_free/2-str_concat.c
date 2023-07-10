#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - function that concatenates two strings..
 * @s1: input string.
 * @s2: input string.
 * Return: NULL on failure and return apointer to *
 * a newly allocated space in memory *
 * which contains the contents of s1, * followed by the contents of s2,
 * and null terminated is success.
*/
char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int len1 = 0, len2 = 0, i, j;
if (s1 == NULL)
return (" ");
if (s2 == NULL)
return (" ");
len1 = strlen(s1);
len2 = strlen(s2);
concatenated = malloc((len1 + len2 + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];
for (j = 0; j < len2; j++)
concatenated[i + j] = s2[j];
concatenated[i + j] = '\0';
return (concatenated);
}
