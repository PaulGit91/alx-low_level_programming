#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between strings
 * @n: the number of strings passed to the function
 * Return: Nothing if string is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	char *ps;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		ps = (va_arg(ap, char*));
		if (ps != NULL)
		{
			printf("%s", ps);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
