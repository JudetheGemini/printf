#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>

/**
 * struct print - print
 * @parameter: The operator
 * @f: The function associated
 */

typedef struct print
{
	char *parameter;
	int (*f)(va_list ap);
} print_specifier;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list ap);
int _print_string(va_list ap);
int _print_percent(va_list ap);
int _print_int(va_list ap);
int _print_reverse(va_list ap);
int _print_rot13(va_list ap);
int _print_unsigned(va_list ap);
int _print_octal(va_list ap);
int _print_binary(va_list ap);
int _print_hex(va_list ap);
int _print_hex_cap(va_list ap);
char *convert(unsigned int num, int base);
int get_print(const char *format, print_specifier argument[], va_list ap);
#endif
