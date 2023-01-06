#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - mulptiplication
 * @argc: count argument
 * @argv: argument
 * Return: 0 id correct 1 if else
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
