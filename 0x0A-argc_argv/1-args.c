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

	printf("%d\n", argc);

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
