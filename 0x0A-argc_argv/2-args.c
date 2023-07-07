#include <stdio.h>
/**
 * main - Entry point.
 * @argc: int.
 * @argv: string.
 * Return: 0 is (success).
*/
int main(int argc, char const *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
