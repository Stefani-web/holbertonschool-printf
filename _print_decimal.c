#include <stdio.h>
#include "main.h"
/**
 * print_decimal - Prints an integer
 * @args: va_list containing the integer to print
 * Return: number of chars printed
 */
int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int len = 0;
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
	{
		return (0);
	}
	length = len;
	if (n < 0)
	{
		_putchar('-');
		n = abs(n);
	}
	while (n != 0)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
	while (len < length + 2)
	{
		_putchar(str[len]);
		len++;
	}
	free(str);
	return (length);
}
