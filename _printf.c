#include "main.h"

/**
 * custom_printf - Custom formatted output conversion and printing.
 * @fmt_str: Input format string.
 * Return: Number of characters printed.
 */
int _printf(const char * const fmt_str, ...)
{
    convert_match conv_list[] = {
        {"%s", my_printf_string}, {"%c", my_printf_char},
        {"%%", my_printf_percent},
        {"%i", my_printf_int}, {"%d", my_printf_dec},
        {"%r", my_printf_reversed}, {"%R", my_printf_rot13},
        {"%b", my_printf_bin}, {"%u", my_printf_unsigned},
        {"%o", my_printf_octal}, {"%x", my_printf_hex},
        {"%X", my_printf_HEX}, {"%S", my_printf_special_string},
        {"%p", my_printf_pointer}
    };

    va_list arg_list;
    int fmt_idx = 0, conv_idx, chars_printed = 0;

    va_start(arg_list, fmt_str);
    if (fmt_str == NULL || (fmt_str[0] == '%' && fmt_str[1] == '\0'))
        return (-1);

    while (fmt_str[fmt_idx] != '\0')
    {
        conv_idx = 13;
        while (conv_idx >= 0)
        {
            if (conv_list[conv_idx].id[0] == fmt_str[fmt_idx] &&
                conv_list[conv_idx].id[1] == fmt_str[fmt_idx + 1])
            {
                chars_printed += conv_list[conv_idx].f(arg_list);
                fmt_idx = fmt_idx + 2;
                goto PrintLoop;
            }
            conv_idx--;
        }
        _putchar(fmt_str[fmt_idx]);
        chars_printed++;
        fmt_idx++;
    PrintLoop:
        continue;
    }
    va_end(arg_list);
    return chars_printed;
}

