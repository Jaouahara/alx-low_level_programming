#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: the int array
 * @size: the array size
 * @cmp: the compare function
 *
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int v = 0;

	if (array && size && cmp)
		while (v < size)
		{
			if (cmp(array[v]))
				return (v);
			v++;
		}
	return (-1);
}
