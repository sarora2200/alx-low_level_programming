#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: is a pointer of string.
 * Return: the number of nodes.
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;
for (; h; h = h->next)
{
printf("%d\n", h->n);
num++;
}
return (num);
}
