#include "main.h"

/**
 * _isalpha - cheacks for alphabet
 * @c: character to be cheacked
 *
 * Return: 1 if character if a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
