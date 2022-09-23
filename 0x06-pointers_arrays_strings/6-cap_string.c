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

	while (*(s + x) != '\0')
	{
		if (x == 0)
			*(s + x) = *(s + x) - ' ';
		if (*(s + x) == ' ' || *(s + x) == '\t')
			x++;
		else if (*(s + x) == '\n' || *(s + x) == ',')
			x++;
		else if (*(s + x) == ';' || *(s + x) == '.')
			x++;
		else if (*(s + x) == '!' || *(s + x) == '?')
			x++;
		else if (*(s + x) == '"' || *(s + x) == '(')
			x++;
		else if (*(s + x) == ')' || *(s + x) == '{')
			x++;
		else if (*(s + x) == '}')
			x++;
		if (*(s + x) >= 97 && *(s + x) <= 122)
		{
			*(s + x) = *(s + x) - ' ';
			x++;
		}
	}
	return (s);
}
