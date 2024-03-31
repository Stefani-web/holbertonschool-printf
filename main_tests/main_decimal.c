#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len;
	int len2;

	

	len =_printf("%");
	printf("z%dz\n", len);
	printf("%d\n", INT_MAX);
	_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
	_printf("%d\n", INT_MIN);
	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%d - %d = %d\n", 1024, 2048, -1024);
	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("There is %d bytes in %d KB\n", 1024, 1);
	_printf("There is %d bytes in %d KB\n", 1024, 1);
	len = _printf("%d", 1234);
	len2 = printf("%d", 1234);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	printf("%d == %i\n", 1024, 1024);
	_printf("%d == %i\n", 1024, 1024);
	printf("iddi%diddiiddi\n", 1024);
	_printf("iddi%diddiiddi\n", 1024);
	printf("%d", 10000);
	_printf("%d", 10000);
	printf("%i", 10000);
	_printf("%i", 10000);
	_printf("%i", 1024);
	printf("%i", 1024);
	_printf("%i", -1024);
	printf("%i", -1024);
	_printf("There is %i bytes in %i KB\n", 1024, 1);
	printf("There is %i bytes in %i KB\n", 1024, 1);
	_printf("%i - %i = %i\n", 1024, 2048, -1024);
	printf("%i - %i = %i\n", 1024, 2048, -1024);

	return (0);
}
