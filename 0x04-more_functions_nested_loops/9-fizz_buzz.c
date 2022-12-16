#include <stdio.h>
#include "main.h"

/**
 * main - fizzbuzz
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0)
			printf("fizz");
		else if (x % 5 == 0)
			printf("buzz");
		else if ((x % 3 == 0) && (x % 5 == 0))
			printf("fizzbuzz");
		else
			printf("%d", x);

		if (x != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
