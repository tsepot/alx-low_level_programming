#include "main.h"
/**
 * print_triangle - check the code.
 *
 * @size: input size
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				z = (size - x) - 1;
				if (y < z)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

