#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: nbr of arguments
 * @...: strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int a = n;
	char *string;
	va_list af;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(af, n);
	while (a--)
		printf("%s%s", (string = va_arg(af, char *)) ? string : "(nil)",
			a ? (separator ? separator : "") : "\n");
	va_end(af);
}
