#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 * Return: no return.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		if (!(d->owner))
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
