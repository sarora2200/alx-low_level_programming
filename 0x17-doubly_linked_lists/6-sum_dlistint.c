#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - Sum of all the data(n) of a dlistint_t linked list.
 * @head: pointer to head node
 * Return: sum of all the data(n),if the list is empty, return 0.
*/

int sum_dlistint(dlistint_t *head)
{
int sum;
sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
