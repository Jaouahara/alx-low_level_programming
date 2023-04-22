#include "variadic_functions.h"

/**
 * sum_them_all - sums of the variable arguments
 * @n: nbr of arguments
 * @...: integers to sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int a = 0, o = n;
	va_list af;

	if (!n)
		return (0);
	va_start(af, n);
	while (o--)
		a += va_arg(af, int);
	va_end(af);
	return (a);
}
