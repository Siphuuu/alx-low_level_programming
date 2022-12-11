#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

