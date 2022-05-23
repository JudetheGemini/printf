#include "main.h"
/**
 * _print_octal - Prints an octal number
 * @ap: Action pointer
 *
 * Return: Number of digits
 */

int _print_octal(va_list ap)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(ap, unsigned int);
	s = convert(n, 8);
	for (i = 0; s[i]; i++)
	{
		count += _putchar(s[i]);
	}
	return (count);
}
