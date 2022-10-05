#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entrpoint
 *
 * @argv: array
 * @argc: int
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, i, sum = 0;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (i = 0; argv[x][i]; i++)
			{
				if (argv[x][i] < '0' || argv[x][i] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[x]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

