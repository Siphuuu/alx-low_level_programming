#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %i byte(s)", sizeof(char));
	printf("size of a int: %i byte(s)", sizeof(int));
	printf("size of la long int: %i byte(s)", sizeof(long int));
	printf("size of a long long int: %i byte(s)", sizeof(long long int));
	printf("size of a float: %i byte(s)", sizeof(float));
	return (0);
}
