#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (b <= 9)
	{
		while (a <= 14)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;
		}
	_putchar('\n');
	b++;
	a = 0;
	}
}
