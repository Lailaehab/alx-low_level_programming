#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	int temp[i + 1];
	int c = 0;

	for (i = i - 1; i >= 0; i--)
	{
		temp[c] = s[i];
		c++;
	}
	for (j = 0; j <= i; j++)
		s[j] = temp[j];
}
