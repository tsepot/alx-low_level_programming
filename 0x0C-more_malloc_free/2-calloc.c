#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_calloc - entry
 * @nmemb: nmemb
 * @size: size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;

	return (array);
}
