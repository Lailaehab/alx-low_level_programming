#include "lists.h"

/**
 * print_listint - dfghj
 * @h: dfghj
 * Return: xcvb
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
