#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: is input pointer to number a.
 * @b: is input pointer to number b.
*/
void swap_int(int *a, int *b)
{ int e;
e = *a;
*a = *b;
*b = e;
}
