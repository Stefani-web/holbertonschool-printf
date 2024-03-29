#include <stdio.h>
#include "main.h"

/**
 * print_decimal - prints an integer
 * @args: va_list containing the integer to print
 *
 * Return: number of chars printed
 */

int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int len = 1;
	int temp = n;
	char *str;
	int length = 0;

	if (n < 0)
	{
		len++;
		temp *= -1;
	}

	while (temp > 9)
	{
		len++;
		temp /= 10;
	}

	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (0);

	sprintf(str, "%d", n);

	length = len;
	len = 0;
	while (len < length) 
	{
		_putchar(str[len]);
		len++;
	}

	free(str);
	return (len);
}
