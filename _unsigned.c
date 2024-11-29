#include "main.h"

/**
 * _unsigned - unsigned values
 * @args: list of args
 * Return values
 */
int _unsigned(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int numcount = 0;
    unsigned int mul = 1;
    unsigned int div = num;

    if (num == 0)
        return (_putchar('0'));

    while (div > 9)
    {
        mul *= 10;
        div /= 10;
    }
    while (mul >= 1)
    {
        numcount += _putchar(((num / mul) % 10) + '0');
        mul /= 10;
    }

    return (numcount);
}
