#include "lists.h"
/**
 * free_listint2 - frees a list, sets the @head to NULL
 * @head: double pointer to head of list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head)
	{
		while (*head)
		{
			temporary = *head;
			*head = temporary->next;
			free(temporary);
		}
	}
}
