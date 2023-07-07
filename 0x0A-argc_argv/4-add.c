#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point.
 * @argc: int.
 * @argv: string.
 * Return: if no number is passed to the program, print 0,
 * followed by a new line, If one of the number contains symbols that
 * are not digits, print Error, followed by a new line, and return 1.
*/
int main(int argc, char *argv[])
{
int result = 0;
int i;
int num;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int j;
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[i]);
if (num > 0)
{
result += num;
}
}
printf("%d\n", result);
return (0);
}
