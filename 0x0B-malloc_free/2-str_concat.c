#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two string
 * @s1: the first string
 * @s2: the string to add to @s1
 * Return: a pointer that points to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int strlen1 = 0;
	unsigned int strlen2 = 0;
	unsigned int strlen3;
	unsigned int x = 0;
	unsigned int y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[strlen1])
	{
		strlen1++;
	}
	while (s2[strlen2])
	{
		strlen2++;
	}

	strlen3 = strlen1 + strlen2;

	s3 = malloc(sizeof(char) * strlen3 + 1);

	if (s3 == NULL)
		return (NULL);
	while (x < strlen1)
	{
		s3[x] = s1[x];
		x++;
	}
	while (x <= strlen3)
	{
		s3[x] = s2[y];
		x++;
		y++;
	}
	return (s3);
}
