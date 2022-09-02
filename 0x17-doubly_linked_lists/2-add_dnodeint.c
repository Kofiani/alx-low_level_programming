#include "lists.h"

/**
 * add_dnodeint - returns a pointer
 * @head: address to head
 * @n: the integer to insert at beginning
 *Return: returns pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	if (*head == NULL)
	{
		(*head)->prev = newnode;
	}

	*head = newnode;
	return (newnode);
}
