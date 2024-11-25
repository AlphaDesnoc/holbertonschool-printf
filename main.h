#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>

typedef struct types
{
	char type;
	int (*f)(va_list);
} types_t;

int _format(const char type, va_list args);
int _percent(va_list args);
int _putchar(char c);
int _char(va_list args);
int _string(va_list args);
int _int(va_list args);
int _printf(const char *format, ...);


#endif