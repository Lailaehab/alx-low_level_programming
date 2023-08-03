#include "main.h"

/**
 * get_bit - dfghjk
 * @n: fghj
 * @index: dfghj
 * Return: dfghj
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
