#include "main.h"

/**
 * reverse_array - entry point
 *
 * @a: a input
 * @n: n input
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int z;

	for (x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			z = *(a + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = z;
		}
	}
}
