#include "main.h"

/**
 * my_ printf_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int my_printf_char(va_list val)
{
    char c;

    c = va_arg(val, int);
    _putchar(c);
    return(1);
}

