#include <stdarg.h>
#include <stddef.h>
/**
 * print_s - print string
 * @la_list: Store the list of characters
 * Return: numbers of parameters printed
 */

int print_s(va_list la_list)
{
	int i, count = 0;
	char *s;

	s = va_arg(la_list, char *);
	if (s == NULL)
		return (-1);
	for (i = 0; s[i]; i++)
		count++;
	_putchar(s[i]);

	return (count);
}
