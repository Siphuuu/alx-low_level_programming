#include "main.h"

/**
 * _strlen - determine the length of a string
 * @s: the string
 * Return: n the length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
