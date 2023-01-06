#include "main.h"

/**
 * _memset -  fills memory with constant
 * @s: source string
 * @b: constat bit
 * @n: length
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
