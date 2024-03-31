#include "main.h"
#include <stdarg.h>

/**
 * _printf - Our custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int (*function)(va_list);
	const char *p;

	va_list args;

	va_start(args, format);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			function = get_functions(p);

			if (function != NULL)
			{
				count += function(args);
			}
			else
			{
				if (*p + 1 == '\0')
				{
					count = 0;
				}
				else
				{
					return (0);
				}
			}
		}
		else
		{
			count += _putchar(*p);
		}
	}
	va_end(args);
	return (count);
}
