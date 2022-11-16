#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 * does not return 0;
 * if no element matches, return -1;
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;
	int (*p)(int);

	p = cmp;

	if (size <= 0)
	{
		return (-1);
	}
	if (!array || !cmp)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (p(array[x]) && array[x] != 0)
		{
			break;
		}
		if (x == size - x)
		{
			return (-1);
		}
	}
	return (x);
}
