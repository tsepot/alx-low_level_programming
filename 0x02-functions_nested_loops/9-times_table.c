#include "main.h"

/**
 * main - 
 *
 * Return: 0
 */

void times_table(void)

{
	int x;
	int y;
	int mult = 0;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			mult = (x * y);
			if (mult < 10)
			{
				if (x != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			if (y != 9)
				_putchar(',');

		}
		_putchar('\n');
	}
}
