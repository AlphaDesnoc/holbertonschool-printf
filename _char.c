#include "main.h"

/**
 * _char - writes the character c to stdout
 * @args: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
