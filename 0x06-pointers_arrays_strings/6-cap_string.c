#include "main.h"

/**
 * cap_string - entry point
 *
 * @s: a input
 *
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		if (x == 0 || s[x - 1] == ' ' || s[x - 1] == '.' || s[x-1] == '\n')
			if (s[x] >= 'a' && s[x] <= 'z')
				s[x] -= 32;
	return (s);
}
