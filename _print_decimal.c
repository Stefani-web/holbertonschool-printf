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
	int len;
	char *str;
	int length = 0;

	len = length_num(n);

	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (0);
	}

	length = len;
	len--;
	if (n == 0)
	{
		str[0] = '0';
	}
	else
	{
		if (n < 0)
		{
			str[0] = '-';
			n = abs(n);
		}
		while (n != 0)
		{
			str[len--] = (n % 10) + '0';
			n /= 10;
		}
	}
	while (len < length)
	{
		_putchar(str[len]);
		len++;
	}
	free(str);
	return (length);
}

/**
 *length_num - count the number of digit without "-" 
 * @number: number
 * 
*/
int length_num(int number)
{
	int len = 1;
	int temp = number;

	if (number < 0)
	{
		len++;
		temp *= -1;
	}
	while (temp > 9)
	{
		len++;
		temp /= 10;
	}

	return (len);
}