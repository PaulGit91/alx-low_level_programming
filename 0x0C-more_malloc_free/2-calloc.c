#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of elements
 * @size: the size of that element type
 * Return: A pointer to the allocated memeory. NULL if nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int x;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	a = malloc(size * nmemb);

	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (size * nmemb); x++)
	{
		a[x] = 0;
	}
	return (a);
}
