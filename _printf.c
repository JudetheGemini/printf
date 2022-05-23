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
		{"d", _print_int},
		{"i", _print_int},
		{"b", _print_binary},
		{"R", _print_rot13},
		{"r", _print_reverse},
		{"o", _print_octal},
		{"X", _print_hex},
		{"x", _print_hex_cap},
		{"u", _print_unsigned},
		{NULL, NULL}
	};
	va_list ap;
	int num = 0;

	va_start(ap, format);
	num = get_print(format, argument, ap);
	va_end(ap);
	return (num);
}
