#include "main.h"

/**
 * print_rev - check the code
 *
 * @s: the value of int
 * Return: Always 0
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
	{
	}
	for (x = x - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
