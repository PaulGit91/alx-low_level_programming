#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i, lname, lowner;

	doggy = malloc(sizeof(*doggy));
	if (doggy == NULL || !(name) || !(owner))
	{
		free(doggy);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	doggy->name = malloc(lname + 1);
	doggy->owner = malloc(lowner + 1);

	if (!(doggy->name) || !(doggy->owner))
	{
		free(doggy->owner);
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		doggy->name[i] = name[i];
	doggy->name[i] = '\0';

	doggy->age = age;

	for (i = 0; i < lowner; i++)
		doggy->owner[i] = owner[i];
	doggy->owner[i] = '\0';

	return (doggy);
}
