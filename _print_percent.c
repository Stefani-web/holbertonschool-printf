#include "main.h"

/**
 * print_percent - Prints a percent sign
 * @args: va_list containing the integer to print
 *
 * Return: 1 (number of chars printed)
 */

int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
