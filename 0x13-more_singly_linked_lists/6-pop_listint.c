#include "lists.h"

/**
 * pop_listint - removes head node of a linked list
 * @head: first element in the linked list
 * Return: data in the removed elements else 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}


