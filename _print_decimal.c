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

	while (len--)
		_putchar(str[len]);

	free(str);
	return (len);
}
