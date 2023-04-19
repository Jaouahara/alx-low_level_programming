#include "function_pointers.h"

/**
 * get_op_func - returns the pointer to the right op function
 * @s: string operator
 *
 * Return: the right function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int h = 0;

	while (h < 5)
	{
		if (s && s[0] == ops[h].op[0] && !s[1])
			return (ops[h].f);
		h++;
	}

	return (NULL);
}
