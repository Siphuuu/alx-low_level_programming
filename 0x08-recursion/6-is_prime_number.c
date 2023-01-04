#include "main.h"

/**
 * evaluate_num - recursion loop
 * @num: number
 * @iterator: num to iterator
 * Return: 1 or 0
 */

int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
		return (1);
	else if (num % iterator == 0)
		return (0);
	else if (num % iterator != 0)
		return (evaluate_num(num, iterator + 1));
	return (0);
}

/**
 * is_prime_number - prints prime number
 * @n: number
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	int iterator = 2;

	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (evaluate_num(n, iterator));
}
