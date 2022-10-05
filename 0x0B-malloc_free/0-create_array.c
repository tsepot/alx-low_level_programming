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

	if (size != 0)
		my_array = malloc(size * sizeof(c));
	else
		return (NULL);
	if (my_array == NULL)
		return (NULL);
	while (i < size)
	{
		my_array[i] = c;
		i++;
	}
	return (my_array);
}
