#include <stdio.h>
/**
 * main - main block
 * Description: all possible diffrent combination of three digit
 * Return: Always 0
 */
int main(void)
{
	int once = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (once = '0'; tens <= '9'; once++)
			{
				if (!((once == tens) || (tens == hundreds) || (hundreds > tens) || (tens > once)))
				{
					putchar(hundreds);
					putchar(tens);
					putchar(once);
					if (!(once == '9' && tens == '8' && hundreds == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
