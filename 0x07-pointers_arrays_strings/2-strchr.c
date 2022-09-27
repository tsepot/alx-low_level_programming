#include "main.h"
#include <stdio.h>

/**
 * _strchr - entry point
 *
 * @s: s value
 * @c: b value
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
