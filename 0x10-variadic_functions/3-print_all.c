#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - prints the char character
 * @list: the type
 * Return: nothing
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_int - prints the int
 * @list: the type
 * Return: nothing
 */
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * print_float - prints the float
 * @list: the type
 * Return: nothing
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_string - prints the string
 * @list: the type
 * Return: nothing
 */
void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: list of funcs of arguments passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	int x = 0, y = 0;
	va_list list;
	char *separator = "";

	va_start(list, format);

	while (format && format[x])
	{
		while (funcs[y].print)
		{
			if (format[x] == *funcs[y].print)
			{
				printf("%s", separator);
				funcs[y].f(list);
				separator = ", ";
			}
			y++;
		}
		y = 0;
		x++;
	}
	printf("\n");
	va_end(list);
}
