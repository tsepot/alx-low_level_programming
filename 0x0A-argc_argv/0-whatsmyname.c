#include <stdio.h>

/**
 * main - entrpoint
 *
 * @argv: array
 * @argc: int
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		if (argc == 1)
		{
			printf("%s\n", argv[x]);
		}
		else
		{
			break;
		}
	}
	return (0);
}

