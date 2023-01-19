#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list va;
	unsigned int i = 0;
	char *s, *separator;

	va_start(va, format);

	separator = "";

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(va, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(va, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(va, double));
				break;
			case 's':
				s = va_arg(va, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(va);
}
