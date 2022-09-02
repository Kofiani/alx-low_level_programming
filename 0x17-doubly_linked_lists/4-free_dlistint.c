#include "lists.h"

/**
 * free_dlistint - frees the memory
 * @head: address of memory to be freed
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
