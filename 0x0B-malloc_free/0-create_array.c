#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of characters,
 * and initializes it with a specific character
 * @size: memory size
 * @c: variable type
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
