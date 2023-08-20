#include "main.h"
#define BUFF_SIZE 1024
/**
 * print_buffer - if buffer exist it prints
 * @buffer: Array of characters
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
	{
		write(1, buffer, *buff_ind);
		*buff_ind = 0;
	}
}
/**
 * _printf - Function prints different output to console
 * @format: data types
 * Return: string and chars.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, printed_chars = 0;
	int buff_ind = 0;
	char buffer[BUFF_SIZE] = {0};

	if (format == NULL)
	return (-1);
	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
	if (format[i] != '%')
	{
	buffer[buff_ind++] = format[i];
	if (buff_ind == BUFF_SIZE)
		print_buffer(buffer, &buff_ind);
	printed_chars++;
	}
	else
	{
	int flags, width, precision, size, printed;
	/* flush buffer */
	print_buffer(buffer, &buff_ind);
	flags = get_flags(format, &i);
	width = get_width(format, &i, list);
	precision = get_precision(format, &i, list);
	size = get_size(format, &i);
	++i;
	printed = handle_print(format, &i, list, buffer,
			flags, width, precision, size);
	if (printed == -1)
		return (-1);
	printed_chars += printed;
	buff_ind = 0;
	}
	}
	/* Flush remaining beuffer */
	print_buffer(buffer, &buff_ind);
	va_end(list);
	return (printed_chars);
}
