#include "3-calc.h"

/**
 * main - check the code
 * @argv: argument vector
 * @argc: the number of args
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int), m, n;

	if (argc != 4)
		printf("Error\n"), exit(98);

	m = atoi(argv[1]);
	n = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!n && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(m, n));
	return (0);
}
