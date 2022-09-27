#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - entry point
 *
 * @s: s value
 * @accept: b value
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (*s != '\0')
	{
		y = 0;
		while (*(accept + x) != '\0')
		{
			if (*s == *(accept + x))
			{
				y = 1;
			}
			x++;
		}
		x = 0;
		if (y == 1)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
