#include "main.h"

/**
 * _strspn - entry point
 *
 * @s: s value
 * @accept: b value
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y = 0;
	int z;

	while (*s != '\0')
	{
		z = 0;
		while (*(accept + y) != '\0')
		{

			if (*s == *(accept + y))
			{
				z = 1;
			}
			y++;
		}
		y = 0;
		if (z == 0)
		{
			break;
		}
		x++;
		s++;
	}
	return (x);
}
