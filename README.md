# Custom `printf` Function

This project involves creating a custom `printf` function that mimics the standard C library `printf`. The function handles a variety of conversion specifiers.

## Supported Conversion Specifiers

- `%c`: Character
- `%s`: String
- `%%`: Percent sign
- `%d`/`%i`: Integer
- `%u`: Unsigned integer
- `%o`: Octal number
- `%x`: Hexadecimal number (lowercase)
- `%X`: Hexadecimal number (uppercase)
- `%p`: Pointer address
- `%b`: Binary number
- `%S`: String with non-printable characters shown in hex
- `%r`: Reversed string
- `%R`: ROT13 encoded string

## Usage

Include the `main.h` header in your program and compile the source files.

### Example

```c
#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'H');
    _printf("String: %s\n", "Hello, World!");
    _printf("Percent sign: %%\n");
    _printf("Integer: %d\n", 123);
    _printf("Unsigned integer: %u\n", 123);
    _printf("Octal: %o\n", 123);
    _printf("Hexadecimal: %x\n", 123);
    _printf("Hexadecimal (uppercase): %X\n", 123);
    _printf("Pointer: %p\n", (void *)0x7ffe637541f0);
    _printf("Binary: %b\n", 123);
    _printf("Non-printable: %S\n", "Hello\nWorld");
    _printf("Reversed: %r\n", "Hello");
    _printf("ROT13: %R\n", "Hello");

    return 0;
}
