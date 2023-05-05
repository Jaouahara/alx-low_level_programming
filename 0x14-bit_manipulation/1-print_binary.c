#include "main.h"

/**
 * print_binary - prints a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int fit = sizeof(n) * 8, printed = 0;

	while (fit)
	{
		if (n & 1l << --fit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
