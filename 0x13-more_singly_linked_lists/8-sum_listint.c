#include "lists.h"

/**
 * sum_listint - sdfgh
 * @head: cvbn
 * Return: cvbn
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
