 ss this page with 
.\" groff -man -tascii
.\"

## _PRINTF Manpage 3 "12 July 2022" "Holberton School #C18 Laval _printf Manuel" 

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
.B _printf

This is the C18 Laval 2022 _PRINTF version.

## Description of _printf 

    _printf()is a functions similar to the regular function printf(),
and it takes 2 input arguments.
According to the case, when the program encounter the '%' symbol,
the program will return a specific output FORMAT.


 %s print an array of characters.

 %c return the ASCII character corresponding to
the specific character, the function is calling.

 %i return an integer number of the ASCII table,
character corresponding to a string handle conversion type.

 %d return decimal number of the ASCII table,
corresponding to a string handle conversion type.

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

# BUGS
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

"SEE ALSO"
"printf (3) [linux man page]"
(https://man7.org/linux/man-pages/man3/printf.3.html)

"AUTHOR"
Murdo Nicolai and Sébastien Jonad

