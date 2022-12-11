#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lowercase than by uppercase
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	c = 'A';
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

