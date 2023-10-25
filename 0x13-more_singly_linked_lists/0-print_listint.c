#include "lists.h"

/**
 * print_listint - to prints all the elements in a linked list
 * @h: to linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		k++;
		h = h->next;
	}

	return (k);
}
