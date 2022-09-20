#include "main.h"

/**
 * _strcpy - check the code
 *
 * @dest: the value of int
 * @src: the value of source
 * Return: Always 0
 */

void _strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		*(dest + x) = *(src + x);
	}
	*(dest + x) = '\0';
	return (dest);
}
