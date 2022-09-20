#include "main.h"

/**
 * rev_string - check the code
 *
 * @s: the value of int	
 * Return: Always 0
 */

void rev_string(char *s)
{
	int x;
	int y;

	char z;

	for (x = '\0'; str[x] != 0; x++)
	{
	
	}
	y = 0;
	for (x = x - 1; x > y; y++)
	{
		z = s[x];
		s[x] = s[y];
		s[y] = z;
		x--;

	}
}
