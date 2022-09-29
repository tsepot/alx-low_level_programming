#include "main.h"

/**
 * is_prime_number - entrypoint
 *
 * @n: n value
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (getNumPrim(n, 2));
}

/**
 * getNumPrim - entrypoint
 *
 * @num: num value
 * @i: i value
 * Return: 0
 */

int getNumPrim(int num, int i)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (getNumPrim(num, i + 1));
}
