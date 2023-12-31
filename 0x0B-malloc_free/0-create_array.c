#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars, and initializes
 * it with a specific char.
 * @c: is input character.
 * @size: is input int.
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

if (size == 0)
return (NULL);

ptr = malloc(size * sizeof(char));

if (ptr == NULL)
return (NULL);

for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}

