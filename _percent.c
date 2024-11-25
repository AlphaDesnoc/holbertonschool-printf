#include "main.h"

/**
 * _percent - writes the character c to stdout
 * @args: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _percent(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);

}
