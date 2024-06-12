#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Function Prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int handle_specifiers(const char *format, va_list args);
int handle_custom_specifiers(const char *format, va_list args);
int print_number(int n);
int print_unsigned_number(unsigned int n);
int print_binary(unsigned int n);
int print_octal(unsigned int n);
int print_hexadecimal(unsigned int n, int uppercase);
int print_pointer(void *p);
int print_non_printable(char *str);
int print_reversed(char *str);
int print_rot13(char *str);

#endif /* MAIN_H */
