#include "main.h"

/**
 * handle_specifiers - Handles the format specifiers for _printf
 * @format: Format string
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int handle_specifiers(const char *format, va_list args)
{
	int count = 0;

	switch (*format)
	{
		case 'c':
			count += _putchar(va_arg(args, int));
			break;
		case 's':
			count += _puts(va_arg(args, char *));
			break;
		case '%':
			/*count += _putchar('%');*/
			break;
		case 'd':
		case 'i':
			count += print_number(va_arg(args, int));
			break;
		case 'u':
			count += print_unsigned_number(va_arg(args, unsigned int));
			break;
		case 'o':
			count += print_octal(va_arg(args, unsigned int));
			break;
		case 'x':
			count += print_hexadecimal(va_arg(args, unsigned int), 0);
			break;
		case 'X':
			count += print_hexadecimal(va_arg(args, unsigned int), 1);
			break;
		case 'p':
			count += print_pointer(va_arg(args, void *));
			break;
		default:
			count += handle_custom_specifiers(format, args);
			break;
	}
	return (count);
}
