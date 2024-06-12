#include "main.h"

/**
 * _puts - Writes a string to stdout
 * @str: String to write
 *
 * Return: Number of characters written
 */
int _puts(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
