#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
