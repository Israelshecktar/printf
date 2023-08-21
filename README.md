## ALX printf

This project is a Team project carried out EWEDAIRO ISRAEL and ADEDAYO AYOOLA as instructed by the founder, co-founder and Technical Mentor from the prestigious Tech school ALx_africa. This is a project that aims to create a custom implementation of the **\_printf** function in C. This function allows you to format and print text with diverse data types to the console in a flexible and customizable manner.

## Installation
To use our Customized printf, follow these underlying steps:

1. Clone the repository: git clone https://github.com/Israelshecktar/printf.git
2. Navigate to the project directory: cd printf
3. Compile the source code: gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format \*.c
4. Run the application: ./printf

- All prototype file are in the `main.h` file
  Please note that this customized printf requires a C compiler, such as GCC, to be installed on your system.
  Also note that all codes implented in this repository used the betty style and was checked using betty-style.pl and betty-doc.pl

## Usage

This function provides a similar interface to the standard printf function. You can use format specifiers outlisted below to control the output format.

## Supported Format Specifiers

CustomPrintf supports the following format specifiers:

- %d for integers
- %f for floating-point numbers
- %c for characters
- %S for strings
- %b for binary
- %r for reverser string

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

1. Make sure you have a C compiler, such as GCC, installed on your system.
2. Double-check that the source code was compiled successfully using the provided instructions.
3. If the application fails to run, ensure that you have the necessary permissions to execute the compiled binary.

If the problem persists, please open an issue on our GitHub repository. 
Special thanks to `julien barbier`. All thanks to Alx_africa.
