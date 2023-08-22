#include "main.h"

/**
 * my_printf_HEX - prints an uppercase hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int my_printf_HEX(va_list val)
{
    unsigned int num = va_arg(val, unsigned int);
    char hex_digits[] = "0123456789ABCDEF";
    char hex_representation[32];
    int counter = 0;
    int i;

    do {
        hex_representation[counter++] = hex_digits[num % 16];
        num /= 16;
    } while (num > 0);

    for (i = counter - 1; i >= 0; i--)
    {
        if (_putchar(hex_representation[i]) == EOF)
            return -1; 
    }

    return counter;
}

