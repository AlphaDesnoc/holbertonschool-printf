#include "main.h"

/**
 * _string - writes the string to stdout
 * @args: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _string(va_list args)
{
    char *str = va_arg(args, char *);
    int i;

    if (str == NULL)
        str = "(null)";
    for (i = 0; str[i]; i++)
    {
        _putchar(str[i]);
    }
    return (i);
}