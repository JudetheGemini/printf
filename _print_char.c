#include "main.h"
/**
 * _print_char - writes the character c to stdout
 * @ap: The character to print
 *
 * Return: 1
 */

int _print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
