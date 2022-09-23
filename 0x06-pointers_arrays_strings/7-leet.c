#include "main.h"

/**
 * leet - entry point
 *
 * @s: a input
 *
 * Return: Always 0.
 */

char *leet(char *s)
{
	int x = 0;
	int y = 0;
	char *letters = "aAeEoOlLtT";
	char *numbers = "4433001177";

	while (*(s + x) != '\0')
		while (*(letters + y) != '\0')
			if (*(s + x) == *(letters + y))
				*(s + x)  = *(numbers + y);
		y = 0;
		x++;
	return (s);
}
