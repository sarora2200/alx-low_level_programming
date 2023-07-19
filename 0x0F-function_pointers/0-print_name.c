#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_name - function that prints a name.
 * @name: is input name
 * @f: is input
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
