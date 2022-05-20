#include "main.h"
#include <stdarg.h>
/**
 * _printf - print arguments to output stream and return number of arguments
 * @format: character string
 * Return: number of arguments entered
 */
int _printf(const char *format, ...)
{
	va_list str;
	char c, *s;
	const char specifiers[] = "cs%";

	va_copy(format, specifiers);
	va_start(str, format);

	while (*format)
		switch (*format++)
		{
		case 'c':
			c = (char) va_arg(str, int);
			return (write(1, &c, 1));
		case 's':
			s = va_arg(str, char *);
			return (write(1, &s, 1));
		}
	va_end(str);
}
