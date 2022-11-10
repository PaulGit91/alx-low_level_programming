#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to include for @s2
 * Return: new allocated space in memory,
 * NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int x;
	unsigned int y;
	unsigned int z = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (j > n)
	{
		j = n;
	}
	len = i + j;
	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (y = 0 ; y < i; y++)
	{
		a[z++] = s1[y];
	}
	for (x = 0; x < j; x++)
	{
		a[z++] = s2[x];
	}
	a[z] = '\0';
	return (a);
}
