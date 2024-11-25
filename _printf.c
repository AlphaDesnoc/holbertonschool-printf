#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == '%')
				count += _putchar('%');
			else
				count += _format(format[i], args);
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);

}
