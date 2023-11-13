#include "main.h"

/**
 * print_string - prints string
 * @s: string to print
 * Return: characters in a string
 */

int print_string(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter += _putchar(*s);
		s++;
	}
	return (counter);
}

/**
 * handle_format_specifier - handles %c, %s
 * @format: double pointer
 * @args: arguments
 * Return: counter
 */

int handle_format_specifier(const char **format, va_list args)
{
	int counter = 0;

	switch (**format)
	{
		case 'c':
			counter += _putchar(va_arg(args, int));
			break;
		case 's':
			counter += print_string(va_arg(args, char *));
			break;
		case '%':
			counter += _putchar('%');
			break;
		default:
			counter += _putchar('%');
			counter += _putchar(**format);
	}
	return (counter);
}

/**
 * _printf - simle printf function
 * @format: pointer
 * Return: numbers of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int counter = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			counter += handle_format_specifier(&format, args);
		}
		else
		{
			counter += _putchar(*format);
		}
		counter++;
		format++;
	}
	va_end(args);
	return (counter);
}
