#include "main.h"

/**
 * _pow_recursion - ghj
 * @x: yhuj
 * @y: tyui
 * Return: tghj
 */
int _pow_recursion(int x, int y)
{
	if (y == 0 || x == 1)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
