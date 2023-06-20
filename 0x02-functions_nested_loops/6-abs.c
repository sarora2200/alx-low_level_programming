#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: the integer value for which the absolute value is computed.
 * Return: the absolute value of the integer.
*/

int _abs(int n)
{
if (n < 0)
{
n = -n;
}
return (n);
}
