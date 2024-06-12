fndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);

typedef int (*print_func)(va_list);
print_func get_print_func(char c);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_unsigned(va_list args);
int print_binary(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_pointer(va_list args);
int print_non_printable(va_list args);
int print_reversed(va_list args);
int print_rot13(va_list args);

#endif /* MAIN_H */
