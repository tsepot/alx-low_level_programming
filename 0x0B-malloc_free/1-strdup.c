#include <stdlib.h>
#include "main.h"

/**
 * _strdup - entry
 *
 * @str: char
 * Return: dup
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i += 1;
	i += 1;
	duplicate = malloc(i * sizeof(*duplicate));
	if (duplicate == NULL)
		return (NULL);
	while (j < i)
	{
		duplicate[j] = str[j];
		j += 1;
	}
	return (duplicate);
}
