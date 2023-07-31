#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the first node.
 * Return: sum of all the data (n) * of a listint_t linked list
 * if the list is empty, return 0.
*/
int sum_listint(listint_t *head)
{
listint_t *temp = head;
int sum = 0;
for (; temp; temp = temp->next)
{
sum = sum + temp->n;
}
return (sum);
}
