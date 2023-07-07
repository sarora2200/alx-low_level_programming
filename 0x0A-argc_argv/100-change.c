#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point.
 * @argc: int.
 * @argv: string
 * Return: if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * If the number passed as the argument is negative, print 0,
 * followed by a new line.
*/
int main(int argc, char *argv[])
{
int cents;
int coins;
if (argc == 1)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
coins = 0;
coins = coins + cents / 25;
cents = cents % 25;

coins = coins + cents / 10;
cents = cents % 10;

coins = coins + cents / 5;
cents = cents % 5;

coins = coins + cents / 2;
cents = cents % 2;

coins = coins + cents / 1;
cents = cents % 1;

printf("%d\n", coins);
return (0);
}
