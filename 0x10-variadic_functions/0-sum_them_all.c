#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum up all the parameter
 * @n: number of the argument
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(va, n);

	for (i = 0; i < n; i++)
		sum += va_arg(va, int);
	va_end(va);
	return (sum);
}
