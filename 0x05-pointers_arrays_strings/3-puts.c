#include "main.h"

/**
 * _puts - check the code
 *
 * @str: the value of int 
 * Return: Always 0
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
