#include "main.h"

/**
 * more_numbers -prints 0-14 10 times
 * Return: numbers
 */
void more_numbers(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i < 10; i++)
	{
		n = j;
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar(1 + 48);
				n = j % 10;
			}
			_putchar(n + '0');
		}

	}
	_putchar('\n');
}
