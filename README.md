# ft_printf

A custom implementation of the printf function from the C standard library. This project is part of the 42 school curriculum.

## Description

This project involves recoding the famous `printf` function from libc. The function handles various conversions and formatting options, providing a deeper understanding of variadic functions in C and the intricacies of string formatting.

## Features

The implementation supports the following conversions:
- `%c` - Single character
- `%s` - String
- `%p` - Pointer address
- `%d` - Decimal (base 10) number
- `%i` - Integer in base 10
- `%u` - Unsigned decimal (base 10) number
- `%x` - Hexadecimal number (lowercase)
- `%X` - Hexadecimal number (uppercase)
- `%%` - Percentage sign

## Getting Started

### Prerequisites
- GCC compiler
- Make

### Installation
```bash
git clone https://github.com/yourusername/ft_printf.git
cd ft_printf
make
```

### Usage
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
```

## Building
The project includes a Makefile with the following rules:
- `make` - Compiles the library
- `make clean` - Removes object files
- `make fclean` - Removes object files and the library
- `make re` - Rebuilds the library

## Return Value
The function returns the number of characters printed, or -1 if an error occurs.

## Author
- Rania (radaoudi)

## License
This project is part of the 42 school curriculum. Please refer to 42's policies regarding code usage and distribution.

## Acknowledgments
- 42 school for providing the project requirements and framework
- The C standard library printf function documentation
