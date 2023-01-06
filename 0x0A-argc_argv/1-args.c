#include <stdio.h>
#include "main.h"

/**
 * main - number of arguments passed
 * @argc: number of argument
 * @argv: argument
 * Return: 0 or success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
