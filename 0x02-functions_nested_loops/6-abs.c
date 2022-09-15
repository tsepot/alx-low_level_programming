#include "main.h"
/**
 * main - check the code.
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
