#include "main.h"

/**
 * get_bit -  the value of a bit at a given index
 * @n: the bit
 * @index: index of the bit you want to get
 * Return: the value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
