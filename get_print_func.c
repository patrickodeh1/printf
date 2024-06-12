#include "main.h"

/**
 * get_print_func - Selects the correct function to perform the operation
 * @c: The conversion specifier passed to the _printf function
 *
 * Return: A pointer to the function that corresponds to the specifier
 */
print_func get_print_func(char c)
{
	switch (c)
	{
		case 'c': return print_char;
		case 's': return print_string;
		case '%': return print_percent;
		case 'd': return print_int;
		case 'i': return print_int;
		case 'u': return print_unsigned;
		case 'o': return print_octal;
		case 'x': return print_hex_lower;
		case 'X': return print_hex_upper;
		case 'p': return print_pointer;
		case 'S': return print_non_printable;
		case 'r': return print_reversed;
		case 'R': return print_rot13;
		default: return NULL;
	}
}
