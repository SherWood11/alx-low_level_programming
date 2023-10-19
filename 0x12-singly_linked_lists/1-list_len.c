#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *head)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = head;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
