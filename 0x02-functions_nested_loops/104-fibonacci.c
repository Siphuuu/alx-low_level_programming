#include <stdio.h>

/**
 * main - prints the first fibonacci 98 number
 * Return: Always 0
 */

int main(void)
{
	int c;
	unsigned long i = 0, j = 1, k;
	unsigned long i_half1, i_half2, j_half1, j_half2;
	unsigned long half1, half2;

	for (c = 0; c < 92; c++)
	{
		k = i + j;
		printf("%lu, ", k);
		i = j;
		j = k;
	}
	i_half1 = i / 10000000000;
	j_half1 = j / 10000000000;
	i_half2 = i % 10000000000;
	j_half2 = j % 10000000000;
	for (c = 93; c < 99; c++)
	{
		half1 = i_half1 + j_half1;
		half2 = i_half2 + j_half2;
		if (i_half2 + j_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (c != 98)
			printf(", ");
		i_half1 = j_half1;
		i_half2 = j_half2;
		j_half1 = half1;
		j_half2 = half2;
	}
	return (0);
}
