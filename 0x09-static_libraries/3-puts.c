#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string to standerd output
 * @str: the string
 * Return: empty
 */

void _puts(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
