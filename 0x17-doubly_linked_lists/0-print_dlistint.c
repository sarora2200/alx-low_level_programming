
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @dlistint_t: list
 * @h: pointer to head node
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
struct dlistint_t *current = h;
size_t nodes = 0;

while (current != NULL)
{
print("%d\n", current->n);
current = current->next;
node++;
}
return nodes
}
