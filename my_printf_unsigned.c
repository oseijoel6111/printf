#include "main.h"

/**
 * my_printf_unsigned - prints an unsigned integer.
 * @args: argument to print
 * Return: number of characters printed
 */
int my_printf_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		if (_putchar('-') == EOF)
			return -1;
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
			if (_putchar(digit + '0') == EOF)
				return -1;
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}

	if (_putchar(last + '0') == EOF)
		return -1;

	return i;
}

