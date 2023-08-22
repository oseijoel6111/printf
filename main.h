#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

typedef struct formatter
{
    char *specifier;
    int (*printer)();
} format_specifier;

int my_printf_pointer(va_list val);
int my_printf_hex_aux(unsigned long int num);
int my_printf_HEX(va_list val);
int my_printf_exclusive_string(va_list val);
int my_printf_hex(va_list val);
int my_printf_oct(va_list val);
int my_printf_bin(va_list val);
int my_printf_unsigned(va_list args);
int my_printf_char(va_list val);
int my_printf_string(va_list val);
int my_printf_rev_string(va_list args);
int my_printf_rot13(va_list args);
int my_printf_int(va_list args);
int my_printf_dec(va_list args);
int my_printf_37(void);
int my_printf_custom_int(va_list args);
int my_printf_custom_oct(va_list args);
int my_printf_custom_hex(va_list args);
int my_printf_custom_string(va_list val);
int my_printf_custom_char(va_list val);
int my_printf_custom(void);
int my_printf_custom_hex_upper(va_list args);
int my_printf_custom_percent(void);
int _printf(const char *format, ...);
int _putchar(char c);
int my_strlen(char *s);
int my_strlenc(const char *s);
int my_rev_string(char *s);
int *my_strcpy(char *dest, char *src);

#endif 
