#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: input string.
 * @s2: input string.
 * @n: input int.
 * Return: pointer point to a newly allocated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int len3 = 0;
unsigned int i, j;
if (s1 == NULL)
return ("");
if (s2 == NULL)
return ("");
for (len1 = 0; s1[len1]; len1++)
for (len2 = 0; s2[len2]; len2++)
if (n >= len2)
len3 = len1 + len2;
else
len3 = len1 + n;
s3 = malloc((len3 + 1) * sizeof(char));
if (s3 == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
s3[i] = s1[i];
}
for (j = 0; j < n && s2[j]; j++)
{
s3[len1 + j] = s2[j];
}
s3[len3 + 1] = '\0';
return (s3);
}
