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
	int x, i, cap = 32;
	int separators[] = {',', ';', '.', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - cap;
		}
		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (s[i] == separators[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (s);
}
