#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for array
 * @nmemb: number of member
 * @size: size
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + i) = 0;
	}
	return (ptr);
}
