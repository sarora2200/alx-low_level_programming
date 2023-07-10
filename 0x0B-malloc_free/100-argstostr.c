#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: Pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
char *concatenated;
int total_length = 0;
int i, j;
int index = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
total_length += strlen(av[i]);
total_length += ac;
concatenated = malloc(total_length *sizeof(char));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
concatenated[index++] = av[i][j];
concatenated[index++] = '\n';
}
concatenated[index] = '\0';
return (concatenated);
}
