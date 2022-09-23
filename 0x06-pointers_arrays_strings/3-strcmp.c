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
	int a = 0;

	while (s1[a] != '\0')
	{
		if (s1[a] < s2[a])
		{
			return (s1[a] - s2[a]);
		}
		if (s1[a] > s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
