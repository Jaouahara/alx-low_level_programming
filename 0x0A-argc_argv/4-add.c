#include <stdio.h>
#include <stdlib.h>

/**
 * Print the result of addition of positive  numbers
 * @argc: the number of arguments
 * @argv: pointer to an array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *t;

	while (--argc)
	{
		for (t = argv[argc]; *t; t++)
			if (*t < '0' || *t > '9')
				return (printf("Error\n", 1));
			sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
