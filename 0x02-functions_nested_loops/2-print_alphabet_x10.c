#include "main.h"
/**
 * print_alphabet_x10 -print a-z 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
