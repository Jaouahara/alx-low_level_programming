#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: string name
 * @f: printing functino pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
