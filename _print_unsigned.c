#include "main.h"
/**
 * _print_unsigned - Prints an unsigned integer
 * @ap: Action pointer
 *
 * Return: Number of digits
 */

int _print_unsigned(va_list ap)
{
	int i;
	int count = 0;
	int mint = va_arg(ap, int);
	unsigned int n;

	n = mint;
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 != 0)
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}
