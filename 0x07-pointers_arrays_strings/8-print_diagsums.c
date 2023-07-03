#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - fghj
 * @a: fghj
 * @size: ghj
 * Return: fghj
 */
void print_diagsums(int *a, int size)
{
	int i, n, sum = 0, sum2 = 0;

	for (i = 0; i <= (size * size); n = n + size + 1)
		sum = sum + a[i];
	for (i = size - 1; i <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum, sum2);
}
