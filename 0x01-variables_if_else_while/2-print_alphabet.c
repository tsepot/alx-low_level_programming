# include <stdio.h>
/**
 * main - print alphabet
 *
 * Description: print_alphabet
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
