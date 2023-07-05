#include "main.h"

/**
 * factorial - ty
 * @n: ghjk
 * Return: ghj
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
