#include <stdio.h>
#include <stdlib.h>
# include "main.h"

/**
 * array_range - entry
 * @min: min
 * @max: max
 * Return: pointer
 */

int *array_range(int min, int max)
{
  int *pointer;
  int diff, i;

  if (min > max)
    return (NULL);
  diff = max - min;
  pointer = malloc((diff + 1) * sizeof(int));
  if (pointer == NULL)
    return (NULL);
  for (i = 0; i <= diff; min++, i++)
    {
      pointer[i] = min;
    }
  return (pointer);
}
