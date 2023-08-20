#include "main.h"

/**
 * print_char - prints a character to the standard output
 * @c: The character to print
 *
 * Returns: 1 on success, -1 on error with the appropriate errno set.
 */
int _putchar(char c) {
    return write(1, &c, 1);
}

