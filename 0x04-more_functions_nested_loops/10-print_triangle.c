#include "main.h"
/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x < size; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
