#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
<<<<<<< HEAD
 * Return: the head nodeâ€™s data (n).
=======
 * Return: the head node’s data (n).
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int v;

	if (head == NULL)
		return (0);

	current = *head;
	if (current == NULL)
		return (0);

	v = current->n;
	*head = current->next;
	free(current);
	return (v);
}
