#include "main.h"
#include <string.h>

format_specifier m[] = {
    {"%s", my_printf_string},
    {"%c", my_printf_char},
    {"%i", my_printf_int},
    {"%o", my_printf_oct},
    {"%d", my_printf_dec},
    {"%p", my_printf_pointer},
    {"%b", my_printf_bin},
    {"%x", my_printf_hex},
    {"%X", my_printf_HEX},
    {"%%", my_printf_37},
    {"%r", my_printf_rev_string},
};

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, j, len = 0;

    va_start(args, format);
    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    while (format[i] != '\0')
    {
        j = sizeof(m) / sizeof(m[0]) - 1;
        while (j >= 0)
        {
            if (strcmp(m[j].specifier, &format[i]) == 0)
            {
                len += m[j].printer(args, format + i);
                i += strlen(m[j].specifier);
                break;
            }
            j--;
        }
        if (j < 0)
        {
            _putchar(format[i]);
            len++;
            i++;
        }
    }
    va_end(args);
    return (len);
}


