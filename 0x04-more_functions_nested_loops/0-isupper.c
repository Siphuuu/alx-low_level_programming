#include "main.h"

/**
 * _isupper - tells wheather a letter is uppercase or not
 * @c: a letter
 * Return: 1 if its uppercase, 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') || (c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
