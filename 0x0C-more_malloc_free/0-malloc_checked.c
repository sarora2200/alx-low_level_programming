#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: is input int.
 * Return: pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
int *n = malloc(b);
if (n == 0)
exit(98);
return (n);
}
