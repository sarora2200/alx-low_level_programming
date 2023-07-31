#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to first node.
*/
void free_listint(listint_t *head)
{
listint_t *last;
while (head)
{
last = head->next;
free(head);
head = last;
}
}
