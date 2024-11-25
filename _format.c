#include "main.h"

/**
 * _format - function types.
 * @type: conversion types.
 * @args: arguments.
 * Return: types.
 */
int _format(const char type, va_list args)
{
	types_t types[] = {
		{'c', _char},
		{'s', _string},
		{'%', _percent},
		{'d', _int},
		{'i', _int},
		{'\0', NULL}
	};
	int i = 0;

	while (types[i].type)
	{
		if (types[i].type == type)
			return (types[i].f(args));
		i++;
	}
	return (0);
}
