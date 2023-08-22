## ALX printf

...
This project is a Team project carried out `EWEDAIRO ISRAEL` and `ADEDAYO AYOOLA` as instructed by the founder, co-founder and Technical Mentor from the prestigious Tech school ALx_africa. This is a project that aims to create a custom implementation of the **\_printf** function in C. This function allows you to format and print text with diverse data types to the console in a flexible and customizable manner.
...

## Installation

To use our Customized printf, follow these underlying steps:

1. Clone the repository: git clone https://github.com/Israelshecktar/printf.git
2. Navigate to the project directory: cd printf
3. Compile the source code: gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format \*.c
4. Run the application: ./printf

- All prototype file are in the `main.h` file
  - Please note that this customized printf requires a C compiler, such as GCC, to be installed on your system.
  - Also note that all codes implented in this repository used the betty style and was checked using betty-style.pl and betty-doc.pl

## Usage

This function provides a similar interface to the standard printf function. You can use format specifiers outlisted below to control the output format.

## Examples
```c
#include "main.h"

int main(void)
{
    int num = 1024;
    char *str = "Hi, IsraelDayo!";

    _printf("Number: %d\n", num);
    _printf("String: %s\n", str);

    return (0);
}
Output:

Number: 1024
String: Hi, IsraelDayo!

```
## Supported Format Specifiers

CustomPrintf supports the following format specifiers:

- %s for strings
- %c for characters
- %d for integers
- %f for floating-point numbers
- %r for reverser string
- %b for binary

it also uses a local buffer of 1024 chars in order to call write as little as possible.

You can also use additional formatting options, such as width and precision, (l, h) by following the format specifier with a number. For example, `%10s` will print a string with a minimum width of 10 characters.

## Project Structure

The project follows a simple structure:
├── **main.c**
├── **main.h**
├── **_printf.c**
├── **print_functions2.c**
├── print_functions1.c
├── out_function.c
├── get_size.c
├── get_width.c
├── get_flags.c
├── **utils.c**
└── **README.md**

## Troubleshooting

If you encounter any issues while using our CustomPrintf, try the following troubleshooting steps:

- Make sure you have a C compiler, such as GCC, installed on your system.
- Double-check that the source code was compiled successfully using the provided instructions.
- If the application fails to run, ensure that you have the necessary permissions to execute the compiled binary.

- If the problem persists, please open an issue on our GitHub repository.
  Special thanks to `julien barbier`. All thanks to Alx_africa.

## Authors

This project was built by `EWEDAIRO ISRAEL A` and `ADEDAYO AYOOLA V`.
