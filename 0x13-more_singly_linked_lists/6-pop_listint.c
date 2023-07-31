#include "lists.h"

/**
 * pop_listint - sdfgh
 * @head: dfghj
 * Return: rtyuio
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
