#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number
 * Return: 1 if its greater than zero
 * 0 if equals zero
 * -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	putchar('\n');
}
