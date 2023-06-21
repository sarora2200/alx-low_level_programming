#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n"); /* wrong printf formate */

i = 0;

while (i < 10)
{
putchar(i);
}

printf("Infinite loop avoided! \\o/\n"); /* wrong printf formate */

return (0);
}
