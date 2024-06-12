#include "main.h"

/**
 * handle_custom_specifiers - Handles the custom format specifiers for _printf
 * @format: Format string
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int handle_custom_specifiers(const char *format, va_list args)
{
	int count = 0;

	switch (*format)
	{
		case 'b':
			count += print_binary(va_arg(args, unsigned int));
			break;
		case 'S':
			count += print_non_printable(va_arg(args, char *));
			break;
		case 'r':
			count += print_reversed(va_arg(args, char *));
			break;
		case 'R':
			count += print_rot13(va_arg(args, char *));
			break;
		default:
			count += _putchar('%');
			count += _putchar(*format);
			break;
	}
	return (count);
}
