#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head node
 * @index:  index of the node, starting from 0
 * Return: nth node of a dlistint_t linked list, NULL if node does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int j;
while (head != NULL)
{
if (j == index)
return (head);
j++;
head = head->next;
}
return (NULL);
}
