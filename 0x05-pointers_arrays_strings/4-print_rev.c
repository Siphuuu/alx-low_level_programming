#include "main.h"

/**
 * print_rev - print the reverse
 * @s: string
 * Return: empty
 */

void print_rev(char *s)
{
	int count = '\0';

	while (s[count] >= 0)
	{
		_putchar(count);
		count--;
	}
	_putchar('\n');
}
