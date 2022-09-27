#include "main.h"

/**
 * _memset - entry point
 *
 * @s: s value
 * @b: b value
 * @n: n value
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(s + x) = b;
		x++;
	}
	return (s);
}
