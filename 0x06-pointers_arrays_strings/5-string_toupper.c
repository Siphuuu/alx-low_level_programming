#include "main.h"

/**
 * string_toupper - change strings to uppercase
 * @a: string
 * Return: character
 */

char *string_toupper(char *a)
{
	int index;

	index = 0;

	while (a[index] != '\0')
	{
		if (a[index] >= 'a' && a[index] <= 'z')
			a[index] -= 32;
		index++;
	}
	return (a);
}
