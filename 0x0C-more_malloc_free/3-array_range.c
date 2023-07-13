#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - function that creates an array of integers.
 * @min: minimum range of value stored.
 * @max: maximum range of value stored and number of elements.
 * Return: pointer to the newly created array.
*/
int *array_range(int min, int max)
{
int *result;
int i, newmin;
if (min > max)
return (NULL);
newmin = max - min + 1;
result = malloc(newmin *sizeof(int));
if (result == NULL)
return (NULL);
for (i = 0; min <= max; i++)
result[i] = min++;
return (result);
}
