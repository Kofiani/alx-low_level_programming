#include "lists.h"
/**
 * print_dlistint - Prints the nodes
 * @h: receives the address of the head node
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);

}