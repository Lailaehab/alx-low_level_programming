#include <unistd.h>

/**
 * _putchar - cvb
 * @c: input
 * Return: On Success 1
 * On error -1, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
