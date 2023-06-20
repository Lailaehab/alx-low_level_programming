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
		printf("%d", -1 * n);
	}
	else
		printf("%d", n);
}
