#include <stdlib.h>
#include "main.h"
/**
 * create_array - check the code for Holberton School students.
 * @size: size
 * @c: char
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i = 0;

	my_array = malloc(size * sizeof(c));

	for (i = 0; i < size; i++)
	{
		if (my_array == NULL)
		{
			return (NULL);
		}
		my_array[i] = c;
	}
	return (my_array);
}
