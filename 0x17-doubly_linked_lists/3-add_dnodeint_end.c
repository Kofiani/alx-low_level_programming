#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of the list
 * @head: recieves the head pointer
 * @n: the integer to store in the list
 *
 * Return: a pointer to the the end of the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail, *newnode;
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	tail = *head;

	tail->next = newnode;
	newnode->prev = tail;

	return (newnode);
}
