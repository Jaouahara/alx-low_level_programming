#include "main.h"

/**
 * flip_bits - return number of bits
 * @n: 1st number
 * @m: 2ed number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exo = n ^ m;
	unsigned int pi = 0;

	while (exo)
	{
		if (exo & 1ul)
			pi++;
		exo = exo >> 1;
	}
	return (pi);
}
