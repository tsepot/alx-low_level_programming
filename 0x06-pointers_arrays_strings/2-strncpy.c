#include "main.h"

/**
 * _strncpy - entry point
 *
 * @src: source input
 * @dest: dest input
 * @n: n input
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && *(src + a) != '\0')
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a != n)
	{
		dest[a++] = '\0';
	}
	return (dest);
}
