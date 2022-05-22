#include "main.h"
/**
 * _print_rot13 - Encode a string using rot13
 * @ap: Action pointer
 *
 * Return: Length of string
 */
int _print_rot13(va_list ap)
{
	int i, j;
	char alphabet[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rAlphbet[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *s;

	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; ++i)
	{
		for (j = 0; alphabet[j]; ++j)
		{
			if (alphabet[j] == s[i])
			{
				_putchar(rAlphbet[j]);
				break;
			}
		}
		if (!alphabet[j])
			_putchar(s[i]);
	}
	return (i);
}
