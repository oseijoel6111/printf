#include "main.h"

/**
 * my_printf_hex_aux - Prints a hexadecimal representation of a number.
 * @num: The number to be printed in hexadecimal.
 * Return: Number of characters printed.
 */
int my_printf_hex_aux(unsigned long int num)
{
    long int *digit_array;
    long int digit_count = 0;
    unsigned long int temp_num = num;
    int printed_count = 0;
    int i;

    while (num / 16 != 0)
    {
        num /= 16;
        digit_count++;
    }
    digit_count++;
    digit_array = malloc(digit_count * sizeof(long int));

    for (i = 0; i < digit_count; i++)
    {
        digit_array[i] = temp_num % 16;
        temp_num /= 16;
    }
    
    for (i = digit_count - 1; i >= 0; i--)
    {
        if (digit_array[i] > 9)
            digit_array[i] += 39;
        _putchar(digit_array[i] + '0');
        printed_count++;
    }
    
    free(digit_array);
    return printed_count;
}

