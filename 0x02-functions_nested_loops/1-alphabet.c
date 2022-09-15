#include "main.h"
/**
 * main - check the code.
 *
 * Description: printing alphabet
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar(10);
}
