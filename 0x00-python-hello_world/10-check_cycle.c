#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly-linked list contains a cycle.
 *
 * @list: A singly-linked list.
 *
 * Return: if there is no cycle - 0
 *         if a cycle exist - 1.
 */

int check_cycle(listint_t *t)
{
	listint_t *slow;
	listint_t *fast;

	if (t == NULL || t->next == NULL)
		return (0);

	slow = t;
	fast = t;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = current->next;
		fast = fast->next->next;

		if (slow == fast)
			return (1);
	}
	return (0);
}



