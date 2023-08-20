#include "main.h"
/**
 * _printf - is a function to print something given
 * @format: identifier.
 * Return: the len string
 *
 */

int _printf(const char *format, ...) {
    va_list args;
    int char_count=0;
    const char *ptr;
    va_start(args, format);
    
    char_count = 0;
    
    ptr = format;
    
    while (*ptr) {
        if (*ptr == '%') {
            ptr++;
            
            switch (*ptr) {
                case 'c':
                    _putchar(va_arg(args, int));
                    char_count++;
                    break;
                case 's': {
                    const char *str = va_arg(args, const char*);
                    while (*str) {
                        _putchar(*str);
                        str++;
                        char_count++;
                    }
                    break;
                }
                case '%':
                    _putchar('%');
                    char_count++;
                    break;
            }
        } else {
            _putchar(*ptr);
            char_count++;
        }
        
        ptr++;
    }
    
    va_end(args);
    return char_count;
}

