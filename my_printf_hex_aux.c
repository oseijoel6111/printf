#include "main.h"

/**
 * my_printf_hex_aux - Prints a hexadecimal representation of a number.
 * @num: The number to be printed in hexadecimal.
 * Return: Number of characters printed.
 */
int my_printf_hex_aux(unsigned long int num)
{
    long int digit;
    long int *digit_array;
    long int digit_count = 0;
    unsigned long int temp_num = num;
    int printed_count = 0;

    while (num / 16 != 0)
    {
        num /= 16;
        digit_count++;
    }
    digit_count++;
    digit_array = malloc(digit_count * sizeof(long int));

    for (digit_count = 0; digit_count < digit_count; digit_count++)
    {
        digit_array[digit_count] = temp_num % 16;
        temp_num /= 16;
    }
    
    for (digit_count = digit_count - 1; digit_count >= 0; digit_count--)
    {
        if (digit_array[digit_count] > 9)
            digit_array[digit_count] += 39;
        _putchar(digit_array[digit_count] + '0');
        printed_count++;
    }
    
    free(digit_array);
    return printed_count;
}

