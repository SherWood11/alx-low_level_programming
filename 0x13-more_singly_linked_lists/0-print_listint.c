#include "lists.h"
#include <stdio.h>

/**
 *  * print_listint - Print elements of a singly linked list.
 *   * @h: Pointer to a list.
 *    * Return: Integer.
 *     **/

size_t print_listint(const listint_t *h)
{
	const listint_t *x;
	unsigned int cntr = 0;

	x = h;
		while (x)
				{
					printf("%d\n", x->n);
					cntr++;
					x = x->next;
				}
	return (cntr);
}
