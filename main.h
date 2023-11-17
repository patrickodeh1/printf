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
#endif
