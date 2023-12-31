#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number.
 * @m: second number.
 * Return: the number of bits to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int result = 0;
while (xor_result > 0)
{
if (xor_result & 1)
result++;
xor_result >>= 1;
}
return (result);
}
