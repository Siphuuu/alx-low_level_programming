#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: the number
 * @m: the number to flip n too
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >> = 1;
	}
	return (bits);
}
