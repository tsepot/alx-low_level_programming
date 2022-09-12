#include <stdio.h>

/**
 * main - 8-print_base16.c 
 *
 * Description: 8-print_base16.c
 * Return: 0
 */

int main(void)
{
	char c;
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
