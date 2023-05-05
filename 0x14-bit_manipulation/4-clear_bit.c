#include "main.h"

/**
 * clear_bit - clears the bit at index
 * @n: number to index
 * @index: bit to clear
 *
 * Return: 1 if successful and -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
