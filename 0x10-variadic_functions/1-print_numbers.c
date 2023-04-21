#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string separator
 * @n: nbr of arguments
 * @...: integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a = n;
	va_list af;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(af, n);
	while (a--)
		printf("%d%s", va_arg(af, int),
			a ? (separator ? separator : "") : "\n");
	va_end(af);
}

