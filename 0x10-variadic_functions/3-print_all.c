#include "variadic_functions.h"

/**
 * format_char -format character
 * @separator: string separator
 * @af: argument pointer
 */
void format_char(char *separator, va_list af)
{
	printf("%s%c", separator, va_arg(af, int));
}

/**
 * format_int - formats integer
 * @separator: string separator
 * @af: argument pointer
 */
void format_int(char *separator, va_list af)
{
	printf("%s%d", separator, va_arg(af, int));
}

/**
 * format_float -formats float
 * @separator: the string seprator
 * @af: argument pointer
 */
void format_float(char *separator, va_list af)
{
	printf("%s%f", separator, va_arg(af, double));
}

/**
 * format_string - formats string
 * @separator: the string separator
 * @af: argument pointer
 */
void format_string(char *separator, va_list af)
{
	char *string = va_arg(af, char *);

	switch ((int)(!string))
		case 1:
			string = "(nil)";
	printf("%s%s", separator, string);
}

/**
 * print_all - prints all
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	int a = 0, k;
	char *separator = "";
	va_list af;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[a])
	{
		k = 0;
		while (tokens[k].token)
		{
			if (format[a] == tokens[k].tokens[0])
			{
				tokens[k].f(separator, af);
				separator = ", ";
			}
			k++;
		}
		a++;
	}
	printf("\n");
	va_end(af);
}
