#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index @index of a list
 * @head: double pointer to head of list
 * @index: node to delete
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary;
	listint_t *next;
	unsigned int count = 0;

	temporary = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temporary->next;
		free(temporary);
		return (1);
	}
	while (temporary && count < index - 1)
	{
		temporary = temporary->next;
		count++;
		if (temporary == NULL || temporary->next == NULL)
		{
			return (-1);
		}
	}
	next = temporary->next->next;
	free(temporary->next);
	temporary->next = next;
	return (1);
}
