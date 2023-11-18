#include "main.h"
/**
 * print_int - print integer
 * @args: argument to print
 * Return: number of characters printrd
 */
int print_int(va_list args)
{
        int n = va_args(args, int);
        int num, last = n % 10, digit, exp = 1;
        int i = 1;

        n = n / 10;
        num = n;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                n = -n;
                last = -last;
                i++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        exp = exp * 10;
                        num = num / 10;
                }
                num = n;
                while (exp > 0)
                {
                        digit = num / exp;
                        _putchar(digit + '0');
                        num = num - (digit * exp);
                        exp = exp / 10;
                        i++;
 }
        }
        _putchar(last + '0');

        return (i);
}
#include "main.h"
/**
 * print_dec - print decimal.
 * @args: argument to print
 * Return: number of characters printed
 */
int print_dec(va_list args)
{
        int n = va_arg(args, int);
        int num, last = n % 10, digit, exp = 1;
        int i = 1;

        n = n / 10;
        num = n;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                n = -n;
                last = -last;
                i++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        exp = exp * 10;
                        num = num / 10;
}
                num = n;
                while (exp > 0)
                {
                        digit = num / exp;
                        _putchar(digit + '0');
                        num = num - (digit * exp);
                        exp = exp / 10;
                        i++;
                }
        }
        _putchar(last + '0');

        return (i);
}
Task 3 (X)
#include "main.h"
/**
 * print_cap_hexa - converts to hexa
 * @val: variable parameter of type va_list
 * Return: Number to be printed.
 */
int print_cap_hexa(va_list val)
{
        int i, count = 0;
        int *array;
        unsigned int num = va_arg(val, unsigned int);
        unsigned int tmp = num;

        while (num / 16 != 0)
        {
                num = num / 16;
                count++;
        }
        count++;
        array = malloc(sizeof(int) * count);
        if (array == NULL)
        {
                return (NULL);
        }
        for (i = 0; i < count; i++)
        {
                array[i] = tmp % 16;
                tmp = tmp / 16;
        }
        for (i = count - 1; i >= 0; i++)
        {
                if (array[i] > 9)
                        array[i] = array[i] + 7;
                _putchar(array[i] + '0');
        }
        free(array);
        return (count);
}



“Main.h”
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
int print_dec(va_list args);
int print_int(va_list args);
int con_bin(va_list val);
int print_unsigned(va_list args);
int print_octal(va_list val);
int print_hexa(va_list val);
int print_cap_hexa(va_list val);
int print_extra_hex(unsigned int num);
int print_spec_str(va_list val);
#endif


Task 3 (x)
#include "main.h"
/**
 * print_hexa - converts to hexa
 * @val: variable parameter of type va_list
 * Return: Number to be printed.
 */
int print_hexa(va_list val)
{
        int i, count = 0;
        int *array;
        unsigned int num = va_arg(val, unsigned int);
        unsigned int tmp = num;

        while (num / 16 != 0)
        {
                num = num / 16;
                count++;
        }
        count++;
        array = malloc(sizeof(int) * count);
        if (array == NULL)
        {
                return (NULL);
        }
        for (i = 0; i < count; i++)
        {
                array[i] = tmp % 16
                tmp = tmp / 16;
        }
        for (i = count - 1; i >= 0; i++)
        {
                if (array[i] > 9)
                        array[i] = array[i] + 39;
                _putchar(array[i] + '0');
        }
        free(array);
        return (count);

}

Task 3 (u)


#include "main.h"
/**
 * print_unsigned - print positive integer
 * @args: argument to print
 * Return: number of characters printrd
 */
int print_unsigned(va_list args)
{
        int n = va_args(args, int);
        int num, last = n % 10, digit, exp = 1;
        int i = 1;

        n = n / 10;
        num = n;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                n = -n;
                last = -last;
                i++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        exp = exp * 10;
                        num = num / 10;
                }
                num = n;
                while (exp > 0)
                {
                        digit = num / exp;
                        _putchar(digit + '0');
                        num = num - (digit * exp);
                        exp = exp / 10;
                        i++;
                }
 }
        _putchar(last + '0');

        return (i);
}

Task 3 (o)

#include "main.h"
/**
 * print_octal - converts to octal
 * @val: variable parameter of type va_list
 * Return: Number to be printed.
 */
int print_octal(va_list val)
{
        int i, count = 0;
        int *array;
        unsigned int num = va_arg(val, unsigned int);
        unsigned int tmp = num;

        while (num / 8 != 0)
        {
                num = num / 8;
                count++;
        }
        count++;
        array = malloc(sizeof(int) * count);
        if (array == NULL)
        {
                return (NULL);
        }
        for (i = 0; i < count; i++)
        {
                array[i] = tmp % 8;
                tmp = tmp / 8;
        }
        for (i = count - 1; i >= 0; i--)
        {
                _putchar(array[i] + '0');
        }
        free(array);
        return (count);

}

Task 5

#include "main.h"
/**
 * print_extra_hex - converts to hexa
 * @num: variable parameter
 * Return: Number to be printed.
 */
int print_extra_hex(unsigned int num)
{
        int i, count = 0;
        int *array;
        unsigned int tmp = num;

        while (num / 16 != 0)
        {
                num = num / 16;
                count++
        }
        count++;
        array = malloc(sizeof(int) * count);
        if (array == NULL)
        {
                return (NULL);
        }
        for (i = 0; i < count; i++)
        {
                array[i] = tmp % 16;
                tmp = tmp / 16;
        }
        for (i = count - 1; i >= 0; i++)
        {
                if (array[i] > 9)
                        array[i] = array[i] + 7;
                _putchar(array[i] + '0');
        }
        free(array);
        return (count);
}

#include "main.h"
/**
 * print_spec_str - prints special strings
 * @val: Value
 * Return: number of characters printed
 *
 */
int print_spec_str(va_list val)
{
	char *s;
	int i, len = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
	s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_extra_hex(value);
		}
		else
		{
			_putchar(s[i]);
			len++;
 
		}
	}
	return (len);
}
