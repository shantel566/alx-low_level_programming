#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: pointer to the first node in the list
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		prev = *head;
		*head = ahead;
	}

	(*head)->next = prev;

	return (*head);
}
