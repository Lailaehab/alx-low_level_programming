#include "main.h"

/**
 * clear_bit - rtyu
 * @n: sdfgh
 * @index: vbnm
 * Return: cvb
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
