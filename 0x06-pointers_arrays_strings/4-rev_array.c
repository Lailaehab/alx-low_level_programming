#include "main.h"

/**
 * reverse_array - fgh
 * @a: tgui
 * @n: gyjkl
 * Return: fghj
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (j = n - 1; j >= n / 2; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
	}
}
