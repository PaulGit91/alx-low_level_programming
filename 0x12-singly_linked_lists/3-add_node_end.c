#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - returns length of string
 * @s: the string whose length to return
 * Return: the length of string
 */
int _strlen(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * add_node_end - adds a advanced node at the end of a list_t list
 * @head: head of the list
 * @str: string to add to list
 * Return: address of advanced element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *advanced;
	list_t *temp;
	int length = _strlen(str);

	advanced = malloc(sizeof(list_t));

	if (advanced == NULL)
	{
		return (NULL);
	}
	advanced->str = strdup(str);
	advanced->len = length;
	advanced->next = NULL;
	if (*head == NULL)
	{
		*head = advanced;
		return (advanced);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = advanced;
	}
	return (advanced);
}
