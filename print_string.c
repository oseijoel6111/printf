#include "main.h"

/**
 * custom_print_string - Custom function to print a string.
 * @val: Argument.
 * Return: The length of the string.
 */
int my_print_string(va_list val)
{
    char *input_str;
    int i, str_len;

    input_str = va_arg(val, char *);
    if (input_str == NULL)
    {
        input_str = "(null)";
        str_len = my_strlen(input_str);
        for (i = 0; i < str_len; i++)
            _putchar(input_str[i]);
        return (str_len);
    }
    else
    {
        str_len = my_strlen(input_str);
        for (i = 0; i < str_len; i++)
             _putchar(input_str[i]);
        return (str_len);
    }
}

