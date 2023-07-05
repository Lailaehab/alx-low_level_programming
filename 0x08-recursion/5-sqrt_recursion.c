#include "main.h"

/**
 * _sqrt_recursion - dfg
 * @n: fghj
 * Return: fghj
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0 || (n % 2) != 0)
		return (-1);
	return (_sqrt_recursion(n / 2));
}
