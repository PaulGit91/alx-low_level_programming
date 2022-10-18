#include "main.h"

/**
* islower - checks if a charcter is lowercase
* return value: 1 if lowercase
* return value: 0 if not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
