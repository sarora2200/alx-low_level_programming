#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position.
 * @head : pointer to the first node.
 * @idx: index of the list where the new node should be added.
 * Index starts at 0.
 * @n: integer.
 * Return: address of the new node, or NULL if it failed.
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp = *head;
listint_t *new;
unsigned int i;
new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}
return (NULL);
}
