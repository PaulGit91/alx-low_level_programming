#include "main.h"
/**
 * _sqrt_recursion - find the square root of a given number.
 * @n: number to find the square root of.
 * Return: the sqrt as a Int.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1 && n >= 0)
	{
		return (n);
	}
	return (0);
}
