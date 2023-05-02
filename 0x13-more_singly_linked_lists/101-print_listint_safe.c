#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head->next;

	while (slow != NULL)
	{
		_putchar(slow->n + '0');
		count++;

		if (slow == fast)
			break;

		slow = slow->next;

		if (fast == NULL || fast->next == NULL)
			fast = NULL;
		else
			fast = fast->next->next;
	}

	return (count);
}
