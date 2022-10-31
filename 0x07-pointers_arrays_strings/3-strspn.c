#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: segment to return bytes from
 * @accept: the bytes to include
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	int c = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					c++;
			}
		}
		else
		{
			return (c);
		}
	}
	return (c);
}
