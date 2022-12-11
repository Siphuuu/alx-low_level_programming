#include <stdio.h>
#include <stdlib.h>
/**
 * main - print single digit number of base 10
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + 0);
	}
	putchar('\n');
	return (0);
}
