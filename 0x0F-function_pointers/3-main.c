#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: the argument counter
 * @argv: the array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	z = (*p)(x, y);

	printf("%d\n", z);
	return (0);
}
