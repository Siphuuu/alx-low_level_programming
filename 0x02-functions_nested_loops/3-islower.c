#include "main.h"

/**
 * _islower - cheacks if alpha is lower case
 * @c: the character
 * Return: 1 if its lowercase, 0 if else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
