#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @x: The integer to be computed.
 * Return: The absolute value of the integer.
 */
int _abs(int x)
{
	if (x >= 0)
	{
		_putchar(x);
	}
	else
	{
		_putchar(-x);
	}
}
