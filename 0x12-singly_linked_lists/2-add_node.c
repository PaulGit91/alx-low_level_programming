#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of string
 * @s: the string whose length to return
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: address of node
 * @str: string to add
 * Return: address of new element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *advanced;
	int length = _strlen(str);

	advanced = malloc(sizeof(list_t));

	if (advanced == NULL)
	{
		return (NULL);
	}
	advanced->str = strdup(str);
	advanced->len = length;
	advanced->next = *head;
	*head = advanced;
	return (advanced);
}
