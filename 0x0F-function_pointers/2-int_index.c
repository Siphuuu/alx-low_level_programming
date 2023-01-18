#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that search for an integer
 * @array: an array to be searched
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: first element or -1, if if no element match or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
