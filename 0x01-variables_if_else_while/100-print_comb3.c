#include <stdio.h>
/**
 * main - main entry
 * Description: diffrent combination of two digit
 * Return: Always 0
 */
int main(void)
{
	int tens;
	int ones;

	tens = 0;
	ones = 0;
	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = 0; ones <= 9; ones++)
		{
			if (tens != ones && tens < ones)
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == 9 && tens == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
