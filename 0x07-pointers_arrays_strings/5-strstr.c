#include "main.h"
#include <stdio.h>

/**
 * _strstr - entry point
 *
 * @haystack: s value
 * @needle: b value
 *
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	char *s, *x;

	while (*haystack != '\0')
	{
		s = haystack;
		x = needle;

		while (*x == *haystack && *x != '\0'
				&& *haystack != '\0')
		{
			haystack++;
			x++;
		}
		if (*x == '\0')
			return (s);
		haystack = s + 1;
	}
	return (NULL);
}
