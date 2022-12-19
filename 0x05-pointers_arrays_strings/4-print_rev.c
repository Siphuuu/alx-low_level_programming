#include "main.h"

/**
 * print_rev - print the reverse
 * @s: string
 * Return: empty
 */

void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count = count - 1; s[count] != '\0'; count--)
		{
			_putchar(s[count]);
		}
	}
	_putchar('\n');
}
