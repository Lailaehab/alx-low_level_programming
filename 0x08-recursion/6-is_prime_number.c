#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - dfgh
 * @n: ghj
 * Return: fghj
 */
int check_prime(int n, int oth);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - fghj
 * @n: int
 * @oth: int
 * Return: int
 */
int check_prime(int n, int oth)
{
	if (oth >= n && n > 1)
		return (1);
	else if (n % oth == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, oth + 1));
}
