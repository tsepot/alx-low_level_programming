#include "main.h"
/**
 * _abs - Entry point
 * @x: The input character to check
 *
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
		return (x);
	}
	else
		return (x);
}
