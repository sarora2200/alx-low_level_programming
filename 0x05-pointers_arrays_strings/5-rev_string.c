#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: is input string.
*/
void rev_string(char *s)
{ 
char rev = s[0];
int e = 0;
int i;
while (s[e] != '\0')
e++;
for (i = 0; i < e; i++)
{
e--;
rev = s[i];
s[i] = s[e];
s[e] = rev;
}
}
