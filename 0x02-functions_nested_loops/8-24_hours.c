#include "main.h"
/**
 * jack_bauer - check the code.
 *
 * Return: Always 0.
 */


void jack_bauer(void)
{
	int x = 0;
	int y = 0;

	while (x <= 23)
	{
		y = 0;
		while (y <= 59)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
			y += 1;
		}
		x += 1;
	}
}
