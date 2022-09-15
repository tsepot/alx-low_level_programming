#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int l ;
	int n = 0;

	while (n < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar(10);
		n++;
	}
}
