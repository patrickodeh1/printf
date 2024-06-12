#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - Produces output according to a format
 * @format: Format string
 *
 * Return: Number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);  // If the format ends with an unescaped '%'
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				func = get_print_func(*format);
				if (func)
					count += func(args);
				else
				{
					_putchar('%');
					_putchar(*format);
					count += 2;
				}
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}
