#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9
 * Description: do not print 2 and 4
 * Return: numbers
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + 48);
	}
	_putchar('\n');
}
