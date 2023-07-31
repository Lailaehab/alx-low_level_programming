#include "lists.h"

/**
 * free_listint - dfghj
 * @head: dfgh
 * Return: dfghjk
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
