#include "main.h"

/**
 * puts2 - check the code
 *
 * @str: the value of int 
 * Return: Always 0
 */

void puts2(char *str)
{
	int x;
	char z;

	for (x = 0; str[x] != 0; x++)
	{
		if (x % 2 == 0)
		{
			z = str[x];
			_putchar(z);
		}
	}
	_putchar('\n');
}
