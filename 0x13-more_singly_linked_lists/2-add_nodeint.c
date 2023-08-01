#include "lists.h"

/**
 * add_nodeint - it adds new node at the beginning of a list
 * @head: pointer to the first node in the linked list
 * @n: data to insert
 * Return: pointer to the new node else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

