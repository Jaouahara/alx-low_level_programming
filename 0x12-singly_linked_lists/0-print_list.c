#include "lists.h"

/**
 * _strlen - returns the legth of a string
 * @s: the string
 *
 * Return: integer legth of string
 */
int _strlen(char *s)
{
	int u = 0;

	if (!s)
		return (0);
	while (*s++)
		u++;
	return (u);
}

/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t u = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		u++;
	}
	return (u);
}
