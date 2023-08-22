#include "main.h"

/**
 * my_printf_pointer - Prints a hexadecimal representation of a pointer.
 * @args: Argument list.
 * Return: Number of characters printed.
 */
int my_printf_pointer(va_list args)
{
    void *ptr_value;
    char *null_string = "(nil)";
    unsigned long int hex_value;
    int printed_count = 0;
    int i;

    ptr_value = va_arg(args, void *);

    if (ptr_value == NULL)
    {
        for (i = 0; null_string[i] != '\0'; i++)
        {
            _putchar(null_string[i]);
            printed_count++;
        }
    }
    else
    {
        hex_value = (unsigned long int)ptr_value;
        printed_count += _putchar('0');
        printed_count += _putchar('x');
        printed_count += my_printf_hex_aux(hex_value);
    }

    return printed_count;
}

