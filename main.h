#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>

/**
  * struct types - list of types and their associated functions.
  * Description: This structure pairs a format specifier character with a
  * function pointer to *f.
  *
  * @type: The format specifier character that indicates the data type.
  * @f: A function pointer that process data type specified by `types`.
  */
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

