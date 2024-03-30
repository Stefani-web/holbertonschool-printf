#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct checking_spec - get the function from the char
 * @format: 1st member
 * @ptr_functions: 2nd member
 *
 * Description: give function associated to the char
 */
typedef struct checking_spec
{
	char format;
	int (*ptr_functions)(va_list);
} cheking_spec;

int _printf(const char *format, ...);
int _putchar(char c);
int print_decimal(va_list args);
int print_string(va_list args);
int print_char(va_list args);
int print_percent(va_list args);
int (*get_functions(const char *s))(va_list);
int length_num(int number);

#endif /* MAIN_H */
