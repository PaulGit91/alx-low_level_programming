#include "main.h"
/**
 * _sqrt_recursion - find the square root of a given number.
 * @n: number to find the square root of.
 * Return: the sqrt as a Int.
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1 && n >= 0)
	{
		return (n);
	}
	if (!(n % 2))
	{
		if (n / 2 == 2 || n == 2)
		{
			return (2);
			i = _sqrt_recursion(n / 2);
		}
		if (n / i == i)
		{
			return (i);
		}
		else if (i > 1)
		{
			return (i * 2);
			return (-1);
		}
	}
	return (0);
}
