#include "main.h"

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to memory allocated with malloc(old_size)
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: size in bytes of the new memory block
 *
 * Return: NULL if new_size = 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int y;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (y = 0; y < old_size && y < new_size; y++)
			*((char *)p + y) = *((char *)ptr + y);
		free(ptr);
	}
	return (p);
}
