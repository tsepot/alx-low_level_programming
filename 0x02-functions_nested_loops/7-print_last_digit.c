#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @x: The input character to check
 * Return: Always 0.
 */

int print_last_digit(int x)
{

	x %= 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');
	return (x);
}
