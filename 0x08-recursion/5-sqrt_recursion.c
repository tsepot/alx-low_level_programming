#include "main.h"

/**
 * _sqrt_recursion - entrypoint
 * 
 * @n: n value
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
}

/**
 * getNumSqr - entrypoint
 *
 * @num: num value
 * @i: i value
 * Return: 0
 */

int getNumSqr(int num, int i)
{
	if (num == (i * i))
		return (i);
	else if (num > (i * i))
		return (getNumSqr(num, i + 1));
	else
		return (-1);
}
