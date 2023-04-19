#include "function_pointers.h"

/**
 * array_iterator - given as a parameter on each element of an array
 * @array: the int array
 * @size: the array size
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *terminate = array + size - 1;

	if (array && size && action)
		while (array <= terminate)
			action(*array++);
}
