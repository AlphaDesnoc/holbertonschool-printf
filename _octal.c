#include "main.h"

/**
 * _octal - octal
 * @args: list
 * Return: count
 */
int _octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char octal[12];
	int i = 0, numcount = 0;

	if (num == 0)
		return (_putchar('0'));

	while (num != 0)
	{
		octal[i++] = (num % 8) + '0';
		num /= 8;
	}

	while (--i >= 0)
		numcount += _putchar(octal[i]);

	return (numcount);
}

