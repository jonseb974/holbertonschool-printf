#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 *checkOptions - checks errors in options
 *@type: type for which to check
 *@option: all the options
 *Return: type if ok, \0 otherwise
 */
char checkOptions(char type, char *option)
{
	int i = 0;
	int flags[4] = {0};
	/*flags are in order[+,-,0,' '], if the value = 1 then they are active*/

	switch (type)
	{
	case 'i': case 'd':
		while (option[i])
		{
			if (option[i] == '+' && !flags[0] && !flags[3])
				flags[0] = 1;
			else if (option[i] == '-' && !flags[1] && !flags[2])
				flags[1] = 1;
			else if (option[i] == '0' && !flags[2] && !flags[1])
				flags[2] = 1;
			else if (option[i] == ' ' && !flags[3] && !flags[0])
				flags[3] = 1;
			else
				break;
			i++;
		}
		break;
	case 's':
		if (option[i] == '-')
			i++;
		break;
	default:
		return (0);
	}
	while (option[i])
	{
		if (option[i] < '0' || option[i] > '9')
			return (0);
		i++;
	}
	return (type);
}

/**
 *_printf - same as printf
 *@format: text to print
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, j;
	int count = 0;
	char *option = malloc(20);
	va_list ap;
	char *word;
	
	va_start(ap, format);
	if (option == NULL)
    	return (1);
	memcpy (option, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 20);/* printf("%dhello%%%-15s\n", 25,"0")*/
	for (i = 0; format[i] != 0; i++, count++)
	{
		option[0] = '\0';
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				_putchar('%');
			else if (format[i] == 'c')
				_putchar(va_arg(ap, int));
			else
			{
				j = 0;
				while ((format[i + j] >= ' ' && format[i + j] <= '9'))
				{
					option[j] = format[i + j];
					j++;
				}
				option[j] = '\0';
				if (checkOptions(format[i + j], option) == 'd' ||
				    checkOptions(format[i + j], option) == 'i')
				{
					i += j;
					count += printInt(va_arg(ap, int), option) - 1;
				}
				else if (checkOptions(format[i + j], option) == 's')
				{
					i += j;
					word = (va_arg(ap, char *));
					if (word != NULL)
					{
						count += printString(va_arg(ap, char *), option) - 1;
					}
					else
					{
						_putchar('%');
						i--;
					}
				}
				}
			}
			else 
			{
				_putchar(format[i]);
			}
		}
		va_end(ap);
		free(option);
		return (count);
	}
