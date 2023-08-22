#include "main.h"

/**
 * my_printf_hex - prints an hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int my_printf_hex(va_list val)
{
    unsigned int num = va_arg(val, unsigned int);
    char hex_digits[] = "0123456789abcdef";
    char hex_representation[32];
    int counter = 0;
    int i;

    do {
        hex_representation[counter++] = hex_digits[num % 16];
        num /= 16;
    } while (num > 0);

    i = counter - 1;
    while (i >= 0)
    {
        if (_putchar(hex_representation[i]) == EOF)
            return -1;
        i--;
    }

    return counter;
}

