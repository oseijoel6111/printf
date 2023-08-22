#include "main.h"

/**
 * my_printf_oct - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */
int my_printf_oct(va_list val)
{
    unsigned int num = va_arg(val, unsigned int);
    char octalBuffer[32];
    int bufferIndex;
    int counter = 0;

    if (num == 0) {
        _putchar('0');
        return 1;
    }

    bufferIndex = sizeof(octalBuffer) - 1;

    while (num > 0)
    {
        octalBuffer[bufferIndex] = (num % 8) + '0';
        num /= 8;
        bufferIndex--;
        counter++;
    }

    for (bufferIndex = bufferIndex + 1; bufferIndex < (int)sizeof(octalBuffer); bufferIndex++) {
        _putchar(octalBuffer[bufferIndex]);
    }

    return counter;
}

