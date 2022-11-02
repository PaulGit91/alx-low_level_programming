#include "main.h"
int _sqrt(int, int);
/**
 * _sqrt_recursion - find the square root of a given number.
 * @n: number to find the square root of.
 * Return: the sqrt as a Int.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterator
 * Return: a number
 */
int _sqrt(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
	{
		return (-1);
	}
	if (sqr == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
