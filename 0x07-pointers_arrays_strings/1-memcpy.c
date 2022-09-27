#include "main.h"

/**
 * _memcpy - entry point
 *
 * @src: s value
 * @dest: b value
 * @n: n value
 *
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;
	unsigned int i = 0;

	while (x < n)
	{
		*(dest + x) = *(src + i);
		x++;
		i++;
	}
	return (dest);
}
