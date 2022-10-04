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
	int x, sum = 0;
	char c;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			if (!isdigit(*argv[x]))
			{

				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[x]);
			}

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

