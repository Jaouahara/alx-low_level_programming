#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of each element
 *
 * Return: void pointer to array space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;

	if (!nmemb || !size)
		return (NULL);
	x = malloc(nmemb * size);
	if (!x)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		x[nmemb] = 0;
	return (x);
}
