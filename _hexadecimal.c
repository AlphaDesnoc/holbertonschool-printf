#include "main.h"

/**
 * _hexadecimal - hexa
 * @args: args
 * @upper: upper
 * Return: count
 */
int _hexadecimal(va_list args, char upper)
{
	unsigned int num = va_arg(args, unsigned int);
	char hex[12];
	char offset = upper ? 'A' - 10 : 'a' - 10;
	int i = 0, numcount = 0;

	if (num == 0)
		return (_putchar('0'));

	while (num != 0)
	{
		int rem = num % 16;

		hex[i++] = rem < 10 ? rem + '0' : rem + offset;
		num /= 16;
	}

	while (--i >= 0)
		numcount += _putchar(hex[i]);

	return (numcount);
}

/**
 * _lower_hex - lower x
 * @args: args
 * Return: hexa
 */
int _lower_hex(va_list args)
{
	return (_hexadecimal(args, 0));
}

/**
 * _upper_hex - upper X
 * @args: args
 * Return: count
 */
int _upper_hex(va_list args)
{
	return (_hexadecimal(args, 1));
}

