#include "main.h"

/**
 * my_printf_bin - Prints a binary representation of a number.
 * @args: Argument list.
 * Return: Number of characters printed.
 */
int my_printf_bin(va_list args)
{
    int leading_zeros = 1;
    int printed_count = 0;
    int i, bit;
    unsigned int num = va_arg(args, unsigned int);

    for (i = 31; i >= 0; i--)
    {
        bit = (num >> i) & 1;
        if (bit)
            leading_zeros = 0;

        if (!leading_zeros)
        {
            _putchar(bit + '0');
            printed_count++;
        }
    }

    if (printed_count == 0)
    {
        _putchar('0');
        printed_count++;
    }

    return printed_count;
}

