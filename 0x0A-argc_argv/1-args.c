#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i <= argc; i++)
	{
		printf("%d\n", i -  2);
	}
	return (0);
}
