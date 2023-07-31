#include "lists.h"
/**
 * free_listint2-function that frees a listint_t list.
 * @head: pointer to first node.
*/
void free_listint2(listint_t **head)
{
listint_t *last;
if (head == NULL)
return;
while (*head)
{
last = (*head)->next;
free(*head);
*head = last;
}
*head = NULL;
}
