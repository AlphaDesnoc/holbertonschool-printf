#include "main.h"

/**
 * _address - address
 * @args: args
 * Return: count
 */
int _address(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long addr = (unsigned long)ptr;

	if (!ptr)
		return (_string("(nil)"));

	_string("0x");
	return (2 + _hexadecimal((va_list)&addr, 0));
}
