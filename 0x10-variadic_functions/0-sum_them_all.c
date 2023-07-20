#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: is input
 * Return: sum of all its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0;
unsigned int i;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
sum += va_arg(ptr, unsigned int);
va_end(ptr);
return sum;
}
