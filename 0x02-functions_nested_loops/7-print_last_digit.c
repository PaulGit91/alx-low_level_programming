#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @x: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int x)
{
	int y = x % 10;

	if ((y >= 0) && (y <= 9))
	{
		_putchar(y + '0');
	}
	else if (y < 0)
	{
		y *= -1;
		_putchar(y + '0');
	}
	return (y);
	return (0);
}
