#include "main.h"

/**
 * print_numbers - print number 0 up to 9
 * Return: the number
 */

void print_numbers(void)

{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
	return (x);
}
