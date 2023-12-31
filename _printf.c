#include "main.h"
#define BUFF_SIZE 1024
void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - function implements original printf
 * @format: format specifiers input
 * by Dayo and Israel
 * Return: Printed character str and %
 */
int _printf(const char *format, ...)
{
	/* Declaring variables to use*/
	int i, printed = 0, printed_charss = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list my_list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(my_list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_charss++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, my_list);
			precision = get_precision(format, &i, my_list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, my_list, buffer,
					       flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_charss += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(my_list);

	return (printed_charss);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buff_ind: Index at which to add next char, represents the length.
 * @buffer: Array of chars
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
