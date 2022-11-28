#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: pointer to the head node
 * @index: index of the node
 * Return: The data at the nth node, NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (index == count)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
