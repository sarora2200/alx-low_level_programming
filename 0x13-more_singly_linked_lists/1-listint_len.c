#include "lists.h"
/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: is a pointer to the string.
 * Return: the number of elements.
*/
size_t listint_len(const listint_t *h)
{
size_t num = 0;
for (; h; h = h->next)
{
num++;
}
return (num);
}
