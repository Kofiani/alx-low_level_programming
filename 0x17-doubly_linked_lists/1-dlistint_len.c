#include "lists.h"

/**
 * dlistint_len - get the total nodes
 * @h: receives the address to the head node
 *
 * Return: the number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
