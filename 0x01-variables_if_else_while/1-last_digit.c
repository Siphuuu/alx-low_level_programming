#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: get a randome number and compare the last digit
 * Return: Always 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, l);
	else if (l == 0)
		printf("last digit of %i is %i and is 0\n", n, l);
	else
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, l);
	return (0);
}
