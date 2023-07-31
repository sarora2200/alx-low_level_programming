#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: double pointer.
 * Return: head node’s data (n).
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int i;
if (!head || !*head)
return (0);
i = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (i);
}
