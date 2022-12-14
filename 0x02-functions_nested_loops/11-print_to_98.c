#include "mian.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * @n: number
 * Return: always 0
 */
int print_to_98(int n)
{
	n = 1
	while (n <= 98)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++
	}
	putchar('\n');
	return (0);
}
