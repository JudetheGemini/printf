#include "main.h"

/**
 * _printf - function that prints characters to standard output
 * @format: a character string
 *
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
	print_specifier argument[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{NULL, NULL}
	};
	va_list ap;
	int num = 0;

	va_start(ap, format);
	num = get_print(format, argument, ap);
	va_end(ap);
	return (num);
}
