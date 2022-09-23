#include "main.h"

/**
 * string_toupper - entry point
 *
 * @s: a input
 *
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int x;

	while (*(s + x) != '\0')
	{
		if ((*(s + x) >= 97) && (*(s + x) <= 122))
		{
			*(s + x) = *(s + x) - 32;
		}
		i++;
	}
	return (s);
}
