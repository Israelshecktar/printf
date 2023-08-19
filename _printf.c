#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - Function outputs according to a format
 * _start - start to print argumrnts
 * @format: diff data types and specifiers
 * @...: this specifiers to print to standard outpt
 * Return: chars
 */
int _printf(const char *format, ...)
{
	int len = 0;
	va_list arg_list;

	int k;
	int y;

	va_start(arg_list, format);

	for (k = 0; format[k] != '\0'; k++)
	{
	if (format[k] == '%')
	{
	k++;
	if (format[k] == 'c')
	{
	char c;

	c = va_arg(arg_list, int);

	_putchar(c);
	len++;
	}
	else if (format[k] == 's')

	{
	char *str;

	str = va_arg(arg_list, char *);


	for (y = 0; str[y] != '\0'; y++)
	{
	_putchar(str[y]);
	len++;
	}
	}
	else if
	(format[k] == '%')
	{
	_putchar('%');
	len++;
	}
	}
	else
	{
	_putchar(format[k]);
	len++;
	}
	}
	va_end(arg_list);

	return (len);
}
