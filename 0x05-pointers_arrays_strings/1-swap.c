#include "main.h"

/**
 * swap_int - swap the value of two intigare
 * @a: first integer
 * @b: second integer
 * Return: empty
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
