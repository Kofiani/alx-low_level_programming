#include "lists.h"

/**
 * add_dnodeint - returns a pointer
 * @head: address to head
 * @n: the integer to insert at beginning
 *Return: returns pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tail;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = newnode;
	newnode->prev = tail;

	return (newnode);
}
