#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Prints  number of elements in a linked dlistint_t list.
 * @h : pointer to head node
 * Return: the number of elements in a linked dlistint_t list.
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;
while (h != NULL)
{
h = h->next;
nodes++;
}
return (nodes);
}
