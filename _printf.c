#include "main.h"

/**
 * _printf - Function outputs according to a format
 * @format: diff data types and specifiers
 * _start - for variadic
 * Return: 0 success
 */
int _printf(const char *format, ...)
{
	int len = 0;
	va_list arg_list;
	int k, y;

	va_start(arg_list, format);
	for (k = 0; format[k] != '\0'; k++)
	{
	if (format[k] == '%')
	{
	k++;
	if (format[k] == 'c')
	{
	char c = va_arg(arg_list, int);

	putchar(c);
	len++;
	}
	else if (format[k] == 's')
	{
	char *str = va_arg(arg_list, char *);

	for (y = 0; str[y] != '\0'; y++)
	{
	putchar(str[y]);
	len++;
	}
	}
	else if (format[k] == '%')
	{
	putchar('%');
	len++;
	}
	}
	else
	{
	putchar(format[k]);
	len++;
	}
	}
	va_end(arg_list);
	return (len);
}
