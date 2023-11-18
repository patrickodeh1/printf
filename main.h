#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
/**
 * struct format - A structure for format specifiers.
 * @id: The format specifier.
 * @f: The function pointer to the function
 */

typedef struct format
{
	char *id;
	int (*f)();
} match;
int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_dec(va_list args);
int print_int(va_list args);
int con_bin(va_list val);
int print_unsigned(va_list args);
int print_octal(va_list val);
int print_hexa(va_list val);
int print_cap_hexa(va_list val);
int print_extra_hex(unsigned int num);
int print_spec_str(va_list val);
int print_extra_small_hex(unsigned long int num);
int print_pointer(va_list val);
int print_reverse(va_list val);
int print_rot13(va_list val);
#endif
