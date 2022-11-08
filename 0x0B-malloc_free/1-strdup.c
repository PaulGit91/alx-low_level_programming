#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: The string to copy
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */
char *_strdup(char *str)
{
	char *z;
	unsigned int x = 0;
	unsigned int y = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[x])
	{
		x++;
		z = malloc(sizeof(char) * (x + 1));
	}
	if (z == NULL)
	{
		return (NULL);
	}
	while (str[y])
	{
		z[y] = str[y];
		y++;
		z[y + 1] = 0;
	}
	return (z);
}
