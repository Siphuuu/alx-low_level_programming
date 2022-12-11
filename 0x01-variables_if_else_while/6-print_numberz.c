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
	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
