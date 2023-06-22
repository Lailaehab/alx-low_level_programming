#include "main.h"

/**
 * print_square - print using #
 * @size: the size
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int r,c;
	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
			_putchar('#');
		-putchar('\n');
	}
}
