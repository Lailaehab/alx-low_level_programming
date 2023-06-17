#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'e' || lowercase == 'q')
			lowercase++;
		else
		{
			putchar(lowercase);
			lowercase++;

		}

	}
	putchar('\n');
	return (0);
}
