#include "main.h"

/**
 * _strncat - entry point
 *
 * @src: source input
 * @dest: dest input
 * @n: n input
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
