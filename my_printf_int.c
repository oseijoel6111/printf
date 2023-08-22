#include "main.h"

int my_printf_int(va_list args, const char *format)
{
    int n = va_arg(args, int);
    int num, last = n % 10, digit,precision, exp = 1;
    int i = 1;

    n = n / 10;
    num = n;

    precision = get_precision_from_format(format);
    if (precision == 0 && n == 0)
    {
        return 0;
    }

    if (last < 0)
    {
        _putchar('-');
        num = -num;
        n = -n;
        last = -last;
        i++;
    }

    if (num > 0)
    {
        while (num / 10 != 0)
        {
            exp = exp * 10;
            num = num / 10;
        }
        num = n;
        while (exp > 0)
        {
            digit = num / exp;
            _putchar(digit + '0');
            num = num - (digit * exp);
            exp = exp / 10;
            i++;
        }
    }
    _putchar(last + '0');

    return i;
}

int my_printf_dec(va_list args, const char *format)
{
    int n = va_arg(args, int);
    int num, last = n % 10, digit,precision;
    int i = 1;
    int exp = 1;

    precision = get_precision_from_format(format);

    n = n / 10;
    num = n;

    if (precision == 0 && n == 0)
    {
        return 0;
    }

    if (last < 0)
    {
        _putchar('-');
        num = -num;
        n = -n;
        last = -last;
        i++;
    }

    if (num > 0)
    {
        while (num / 10 != 0)
        {
            exp = exp * 10;
            num = num / 10;
        }
        num = n;
        while (exp > 0)
        {
            digit = num / exp;
            _putchar(digit + '0');
            num = num - (digit * exp);
            exp = exp / 10;
            i++;
        }
    }
    _putchar(last + '0');

    return i;
}


