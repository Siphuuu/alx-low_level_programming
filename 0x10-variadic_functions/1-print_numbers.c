#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints the numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int index;

	va_start(va, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(va, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(va);
}
