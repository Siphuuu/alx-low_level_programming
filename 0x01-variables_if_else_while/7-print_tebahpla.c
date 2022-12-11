#include <stdio.h>
/**
 * main - alphabets in reverse order
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'z';
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
