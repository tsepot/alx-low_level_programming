#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 *
 * @a: the value of int
 * @n: the value of n
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int x = 0;


	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
