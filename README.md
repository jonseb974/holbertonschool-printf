
# _PRINTF Manpage (3) "12 July 2022" __"Holberton School__ #C18 Laval.

## NAME
_printf function - formated output conversion.

## SYNOPSIS

#ifndef HEADER
#define HEADER

char* itoa(int n, int plus);

int printInt (int, char *);

int printString(char *, char *);

int _printf(const char *format, ...);

char checkOptions(char type, char *option);

void _putchar(char);

This is the C18 Laval 2022 _PRINTF version.
This repository holds all the code necessary for our custom _printf function to run. 
Our mini-version currently handles conversion specifiers: c, s, %, d, i

## Description of _printf

    _printf()is a functions similar to the regular function printf(),and it takes 2 input arguments.
    According to the case, when the program encounter the '%' symbol,the program will return a specific output FORMAT.


 %s print an array of characters.

 %c return the ASCII character corresponding to
the specific character, the function is calling.

 %i return an integer number of the ASCII table,
character corresponding to a string handle conversion type.

 %d return decimal number of the ASCII table,
corresponding to a string handle conversion type.

# Requirements:
    
Compile command: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
   
    A test folder containing all tests files including main functions
    Use Structures and Function pointers
    Header file should be include guarded
    Prototypes should be included in header file
    Not more than 5 functions per file

# OPTIONS
The _printf program will replicate the effects of the listed % format specifiers as when used with printf.

    Function name   Description Format Specifier
    _print_char     Prints a single character   %c
    _print_string   Prints a string of characters   %s
    _print_percent  Prints a %  %%
    _print_int      Prints an integer in base 10    %d & %i
    _print_reverse  Prints the string in reverse    r
    _print_rot13    Converts the string into Rot13  R
    _print_binary   Prints the binary form of the integer   b
    _print_unsigned Prints an unsigned integer  u
    _print_octal    Prints and octal number o
    _print_hex_l    Prints the lower case hexidecimal number    x
    _print_hex_u    Prints the upper case hexidecimal number    X
    
    
  # Examples:
  # String (%s)
	len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n")

    return:
    Let's try to printf a simple sentence.
	Let's try to printf a simple sentence.

# Integer (%d)
	 _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    
    return:
    Length:[39, 39]
	Length:[39, 39]

# Integer (%i or %d)
	_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _PRINTF Manpage (3) "12 July 2022" "Holberton School #C18 Laval.
    
    
# Specifier	Input example	Output example
    %c	"Printing a char: [%c]\n", 'X'	Printing a char: [X]
    %s	"Printing a string: [%s]\n", "Hello, World"	Printing a string: [Hello, World]
    %d or %i	"Printing a number: [%i]\n", 386	Printing a number: [386]
    %%	"Printing a percent sign: [%%]\n", %	Printing a percent sign: [%]
    
   #   Install & Compile
    $git clone https://github.com/crasride/holbertonschool-printf.git
    $cd printf
    
   #    Sample of program:
    int main(void)
    {
	    _printf("%s "Hello World");
	    return (0);
    }
    ---------------------------------
    $ gcc -Wall -Werror -Wextra -pedantic *.c -o hi
    $ ./hi
    Hello World
    $

#
"SEE ALSO"
"printf (3) [linux man page]"

(https://man7.org/linux/man-pages/man3/printf.3.html)

"AUTHORS"
Murdo Nicolai and Sébastien Jonad

