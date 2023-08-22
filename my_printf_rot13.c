#include "main.h"

/**
 * my_printf_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 */
int my_printf_rot13(va_list args)
{
    int i, counter = 0;
    char *s = va_arg(args, char*);
    char rot13_map[256];

    if (s == NULL)
        s = "(null)";

    for (i = 0; i < 256; i++)
        rot13_map[i] = i;

    for (i = 'a'; i <= 'z'; i++)
    {
        rot13_map[i] = (i - 'a' + 13) % 26 + 'a';
        rot13_map[i + 'A' - 'a'] = (i - 'a' + 13) % 26 + 'A';
    }

    for (i = 0; s[i]; i++)
    {
        _putchar(rot13_map[(unsigned char)s[i]]);
        counter++;
    }

    return counter;
}

