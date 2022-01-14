#include "lists.h"

/**
<<<<<<< HEAD
 * sum_dlistint - Sums all the data of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

=======
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to head of the list
 * Return: sum of all nodes or 0
 **/
int sum_dlistint(dlistint_t *head)
{
	long int sum;
	dlistint_t *tmp;

	sum = 0;
	if (head == NULL)
	return (sum);

	tmp = head;
	while (tmp)
	{
	sum += tmp->n;
	tmp = tmp->next;
	}
>>>>>>> a77d10a15e5d1a12b1b493c9797b66598eaab382
	return (sum);
}
