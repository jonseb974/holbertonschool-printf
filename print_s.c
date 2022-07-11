#include <stdarg.h>
#include <stddef.h>
#include "main.h"
/**
*printNcar - prints a character n times
*
*@car: character to rpint
*@n: amount of times
*Return: amount of characters printed
*/
int printNcar (char car, int n)
{
	int count = 0;
	for(;n > 0; n--)
	{
		_putchar(car);
		count++;
	}
	return (count);
}
/**
 * _strlen - return length of string
 * @s: string to evaluate
 * Return: Length
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i]; i ++)
		count++;
	return count; 
}

/**
 * print_s - print string
 *
 *@s: list to print
 *@flag: flags 
 * Return: numbers of parameters printed
 */

int printString(char *s, char *flag)
{
	int i = 0, count = 0, j = 0;
	char f = 0;

	while (flag[i])
		{
			if (flag[i] == '+' || flag[i] == ' ')
				;
			else if (flag[i] == '-')
				f = '-';
			else if (flag[i] == '0')
				f = '0';
			else
				break;
			i++;
		}
	if	(f == '0')
		count += printNcar('0',_atoi(flag + i) - _strlen(s));
	else if (f != '-')
		count += printNcar(' ',_atoi(flag + i) - _strlen(s));
		
	if (s == NULL)
		return (-1);
	for (j = 0; s[j]; j++)
	{
		count++;
		_putchar(s[j]);
	}

	if	(f == '-')
		count += printNcar(' ',_atoi(flag + i) - _strlen(s));
	return (count);
}
