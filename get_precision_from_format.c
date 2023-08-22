#include "main.h"


int get_precision_from_format(const char *format)
{
    int precision = -1;
    int i = 0;

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '.')
            {
                i++;
                precision = my_atoi(&format[i]);
                break;
            }
        }
        i++;
    }

    return precision;
}

