/**
 *itoa - converts integer to string
 *
 *@n: integer to convert
 *Return: amount of caracters printed
 */
#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* itoa(int n, int plus)
{
	int i = 1000000000;
	char *result = malloc(10 * sizeof(char));
	int car;
	int p = 1;
	int incr = 0;

	if (n < 0)
	{
		result[p - 1] = '-';
		if (n < -i)
		{
			n++;
			incr = 1;
		}
		n *= -1;
	}
	else if (plus == 1)
		result[p - 1] = '+';
	else if (plus == 2)
		result[p - 1] = ' ';
	else
		p--;
	while (i > n && n > 0)
		i /= 10;

	while (n > 9)
	{
		car = ((n - (n % i)) / i) + 48;
		n =  n % i;
		result[p] = car;
		p++;
		i /= 10;
	}

	result[p] = n + '0' + incr;
	return (result);
}


/**
 *printInt - prints integer with flags
 *
 *@n: number to print
 *@option: string of flags
 *Return: amount of caracters printed
 */

int printInt (int n, char *option)
{
	int i = 0;
	int strlen = 0;
	char flag0min = 0;
	int flagplus = 0;
	char *res;

	while (option[i])
		{
			if (option[i] == '+')
				flagplus = 1;
			else if (option[i] == ' ')
				flagplus = 2;
			else if (option[i] == '-')
				flag0min = '-';
			else if (option[i] == '0')
				flag0min = '0';
			else
				break;
			i++;
		}
        res = itoa(n, flagplus);
	if (flag0min)
	{
		i--;
		option[i] = flag0min;
	}
	strlen = printString(res, option + i);
	free(res);
	return strlen;
}
