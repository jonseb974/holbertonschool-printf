#include <string.h>
#include <stdio.h>

/**
 *_atoi - converts string to int
 *
 *@s: string to convert
 *Return: integer
 */



int _atoi(char *s)
{
	int c = 0;
	int c2 = 0;
	int i = 0;
	int power = 0;
	int add = 0;
	int integer = 0;
	int isnegative = 0;

	while (!(s[c] >= '0' || s[c] <= '9') && s[c])
	{
		if (s[c] == '-')
			isnegative++;
		c++;
	}
	c2 = c;
	while ((s[c] >= '0' || s[c] <= '9') && s[c])
	{
		power++;
		c2++;
	}
	while ((s[c] >= '0' || s[c] <= '9') && s[c])
	{
		add = (s[c] - '0');
		for (i = 1; i < power; i++)
			add *= 10;
		power--;
		integer -= add;
		c++;
	}
	if (isnegative % 2 == 0)
		integer *= -1;
	return (integer);
}
