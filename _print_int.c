#include "main.h"
/**
 *_print_int - print integer when encounter d and i
 * @ap: argument pointer
 * Return: number of arguments
 */
int _print_int(va_list ap)
{
	int i;
	int count = 0;
	int n = va_arg(ap, int);

	if (n < 0)
	{
		count += _putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 < 0)
				count += _putchar(-(n / i % 10) + '0');
			else
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}
