#include "main.h"
/**
 * _printf - print arguments to output stream and return number of arguments
 * @format: character string
 * Return: number of arguments entered
 */
int _printf(const char *format, ...)
{
	va_list argPtr;
	int state, size;
	char ch;
	const char *str;

	state = NORMAL_STATE;

	va_start(argPtr, format);

	while (*format)
	{
		if (state == NORMAL_STATE)
		{
			if (*format == '%')
			{
				state = SPECIFIER;
			}
			else
				putchar(*format);
		}
		else if (state == SPECIFIER)
		{
			switch (*format)
			{
			case 'c':
			{
				ch = (va_arg(argPtr, int));
				putchar(ch);
			}
				break;
			case 's':
			{
				str = (va_arg(argPtr, const char *));
				while (*str)
				{
					putchar(*str++);
				}
				break;
			case '%':
			{
				putchar('%');
				break;
			}
			}
			}
		}
		format++;
	}
	size = (strlen(format) - 1);
	va_end(argPtr);
	return (size);
}
