#include "main.h"
/**
 * _abs -compute absolute value
 * @n: input
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
		return (n);
}
