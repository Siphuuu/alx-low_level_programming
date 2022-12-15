#include <stdio.h>

/**
 * main - fibonacci number sum that dont exceed 4000000
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, l = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
			l += k;
		j = k - j;
		++i;
	}
	printf("%ld\n", l);
	return (0);
}
