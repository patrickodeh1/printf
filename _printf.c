#include "main.h"

/**
 * _printf - Custom printf function to format and print data
 * @format: format string containing the characters and specifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int counter = 0;
	char *s;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					counter++;
					break;
				case 's':
					s = va_arg(args, char *);
					while (*s != '\0')
					{
						_putchar(*s);
						s++;
						counter;
					}
					break;
				case '%':
					_putchar('%');
					counter++;
					break;
				default:
					_putchar('%');
					_putchar(*format);
					counter += 2;
			}
		}
		else
		{
			_putchar(*format);
			counter++;
		}
		format++;
	}
	va_end(args);
	return (counter);
}

