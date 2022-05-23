#include "main.h"
/**
 * _print_hex - function that prints a hex number from int
 * @ap: the action pointer
 *
 * Return: the count
 */

int _print_hex(va_list ap)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(ap, unsigned int);
	s = convert(n, 16);
	if (!n)
		count += _putchar('0');
	for (i = 0; s[i] && n; i++)
		count += _putchar(s[i]);
	return (count);
}
