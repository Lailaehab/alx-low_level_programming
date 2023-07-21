#include "function_pointers.h"

/**
 * print_name - rty
 * @name: dfghj
 * @f: sdfgh
 * Return: dfghj
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
