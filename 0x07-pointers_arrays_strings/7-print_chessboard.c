#include "main.h"

/**
 * print_chessboard - entry point
 *
 * @a: a value
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int x = 0, y;

	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			if (y == 7)
				_putchar('\n');
			y++;
		}
		x++;
	}
}
