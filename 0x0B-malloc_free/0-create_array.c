#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array of character and innitialize
 * @size: size
 * @c: character
 * Return: o if fail or size 0, else a ponter to array
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}
	}
	return (buffer);
}
