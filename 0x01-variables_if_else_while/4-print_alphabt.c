#include <stdio.h>
/*
 * main - 4-print_alphabt.c
 * Description: 4-print_alphabt.c
 * Return: 0
 */

int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
