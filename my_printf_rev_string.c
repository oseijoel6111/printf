#include "main.h"

/**
 * my_printf_rev_string - Prints a string in reverse.
 * @args: A va_list containing the printf arguments.
 *
 * This function takes a va_list containing the printf arguments
 * and prints the provided string in reverse order.
 *
 * Return: The length of the original string.
 */
int my_printf_rev_string(va_list args)
{
    char *s = va_arg(args, char*);
    int i;
    int j = 0;

    if (s == NULL)
        s = "(null)";

    while (s[j] != '\0')
        j++;

    for (i = j - 1; i >= 0; i--)
        _putchar(s[i]);

    return j;
}

