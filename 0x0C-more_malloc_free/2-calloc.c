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
  void *pointer;

  if (nmemb == 0 || size == 0)
    return (NULL);
  pointer = malloc(nmemb * size);
  if (pointer == NULL)
    return (NULL);
  _memset(pointer, 0, (nmemb * size));
  return (pointer);
}

/**
 *_memset - entry
 * @s: s
 * @b: b
 * @n: n
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;

  for (i = 0; i < n; i++)
    {
      s[i] = b;
    }
  return (s);
}
