#include <stdlib.h>
#include "main.h"

/**
 * str_concat - entry
 * @s1: char
 * @s2: char2
 * Return: arr
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *arr;

	k = 0;
	arr = malloc(sizeof(*s1 + *s2));

	if (arr == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		arr[k] = s1[i];
		i++;
		k++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		arr[k] = s2[j];
		j++;
		k++;
	}
	return (arr);
	free(arr);
}
