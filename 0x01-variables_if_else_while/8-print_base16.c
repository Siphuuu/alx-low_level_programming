#include <stdio.h>
/**
 * main - all hexadecimal numbers
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
