#include "lists.h"

/**
 * list_length - Calculate the number of elements.
 * @head: Pointer to a list.
 * Return: Integer.
 **/

size_t list_length(const list_t *head)
{
	const list_t *current_node;
	size_t count = 0;

	current_node = head;
	while (current_node)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}

