#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: is an input string.
*/
void print_chessboard(char (*a)[8])
{
int i;
int e;
for (i = 0; i < 8; i++)
{
for (e = 0; e < 8; e++)
{
_putchar(a[i][e]);
}
_putchar('\n');
}
}
