#include "main.h"

/**
 * get_endianness - returns the endianness of system
 *
 * Return: 0 if big endian and 1 if small endian
 */
int get_endianness(void)
{
	unsigned long int v = 1;

	return (*(char *)&v);
}
