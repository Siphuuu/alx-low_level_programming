#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integer
 * @min: minimum
 * @max: maximum
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int range, i;
	int *p;

	if (min > max)
		return (NULL);
	range = ((max + 1) - min);
	p = malloc(range * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
		*(p + i) = min + i;
	return (p);
}
