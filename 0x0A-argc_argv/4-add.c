#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if ERROR such as symbols that are not numbers,
 * 0 if nothing is passed
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
	}
	return (0);
}
