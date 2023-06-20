#include "main.h"
/**
 * print_last_digit -prints the last digit of a number
 * @n: input
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	_putchar(last + '0');
}
