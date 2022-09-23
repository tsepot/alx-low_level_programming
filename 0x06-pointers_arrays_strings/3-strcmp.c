#include "main.h"

/**
 * _strcmp - entry point 
 *
 * @s1: s1 input
 * @s2: s2 input
 *
 * Return: Always 0.
 */

char _strcmp(char *s1, char *s2)
{
	int a = 0, x;

	while (*(s1 + a) != '\0')
	{
		if (*(s1 + a) > *(s2 + a))
		{
			x = *(s1 + a) - *(s2 + a);
			return (x);
		}
		else if (*(s1 + a) < *(s2 + a))
		{
			x = *(s1 + a) - *(s2 + a);
			return (x);
		}
		a++;
	}
	return (0);
}
