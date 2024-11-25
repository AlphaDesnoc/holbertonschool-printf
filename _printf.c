#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, numcount = 0;
	va_list args;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				numcount += _format(format[i + 1], args);
				i++;
			}
			else
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			numcount++;
		}
	}

	va_end(args);
	return (numcount);

}
