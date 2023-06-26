#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = 0, j = i + 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
