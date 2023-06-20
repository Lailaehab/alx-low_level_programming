#include "main.h"
/**
 * print_alphabet -uses _putchar to print a-z
 */
 
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
