#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void positive_or_negative(int i)

{
	int n;

	sran(time(0));
	n = i;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}

/**
 * main - debugging example
 * Return: Always 0
 */

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
