#include <stdlib.h>
#include <stdio.h>
# include "main.h"

/**
 * malloc_checked - antry
 * @b: b
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
