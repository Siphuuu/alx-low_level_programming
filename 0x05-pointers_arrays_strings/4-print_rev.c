#include "main.h"
#include <stdio.h>

/**
 * print_rev - print the reverse
 * @s: string
 * Return: empty
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (count -= 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
