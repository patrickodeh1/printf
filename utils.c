#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to print
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		count += print_number(num / 10);

	_putchar(num % 10 + '0');
	count++;

	return (count);
}

/**
 * print_unsigned_number - Prints an unsigned integer
 * @n: Unsigned integer to print
 *
 * Return: Number of characters printed
 */
int print_unsigned_number(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_unsigned_number(n / 10);

	_putchar(n % 10 + '0');
	count++;

	return (count);
}

/**
 * print_binary - Converts an unsigned int to binary and prints it
 * @n: Unsigned int to convert and print
 *
 * Return: Number of characters printed
 */
int print_binary(unsigned int n)
{
	int count = 0;
	unsigned int mask = 1 << (sizeof(n) * 8 - 1);
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			count++;
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
			count++;
		}
		mask >>= 1;
	}

	return (count);
}

/**
 * print_octal - Converts an unsigned int to octal and prints it
 * @n: Unsigned int to convert and print
 *
 * Return: Number of characters printed
 */
int print_octal(unsigned int n)
{
	int count = 0;
	unsigned int octal_num[100];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		octal_num[i] = n % 8;
		n /= 8;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(octal_num[i] + '0');
		count++;
	}

	return (count);
}

/**
 * print_hexadecimal - Converts an unsigned int to hexadecimal and prints it
 * @n: Unsigned int to convert and print
 * @uppercase: Flag to determine if the output should be uppercase
 *
 * Return: Number of characters printed
 */
int print_hexadecimal(unsigned int n, int uppercase)
{
	int count = 0;
	char hex_digits[100];
	int i = 0;
	char offset = uppercase ? 'A' - 10 : 'a' - 10;
	int digit;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		digit = n % 16;
		hex_digits[i] = digit < 10 ? digit + '0' : digit + offset;
		n /= 16;
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(hex_digits[i]);
		count++;
	}

	return (count);
}

/**
 * print_pointer - Prints a pointer address
 * @p: Pointer to print
 *
 * Return: Number of characters printed
 */
int print_pointer(void *p)
{
	int count = 0;
	unsigned long address = (unsigned long)p;

	count += _puts("0x");
	count += print_hexadecimal(address, 0);

	return (count);
}

/**
 * print_non_printable - Prints a string and non-printable characters in hex
 * @str: String to print
 *
 * Return: Number of characters printed
 */
int print_non_printable(char *str)
{
	int count = 0;

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			count += _puts("\\x");
			if (*str < 16)
				count += _putchar('0');
			count += print_hexadecimal(*str, 1);
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * print_reversed - Prints a string in reverse
 * @str: String to reverse and print
 *
 * Return: Number of characters printed
 */
int print_reversed(char *str)
{
	int len = 0, count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[len])
		len++;

	for (len--; len >= 0; len--)
	{
		_putchar(str[len]);
		count++;
	}

	return (count);
}

/**
 * print_rot13 - Encodes a string using ROT13 and prints it
 * @str: String to encode and print
 *
 * Return: Number of characters printed
 */
int print_rot13(char *str)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		for (i = 0; in[i]; i++)
		{
			if (*str == in[i])
			{
				_putchar(out[i]);
				count++;
				break;
			}
		}
		if (!in[i])
		{
			_putchar(*str);
			count++;
		}
		str++;
	}

	return (count);
}
