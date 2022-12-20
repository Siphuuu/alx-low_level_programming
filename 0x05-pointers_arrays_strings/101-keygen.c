#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy
 * @dest: destiny
 * @src: source
 * Return: the copied
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
