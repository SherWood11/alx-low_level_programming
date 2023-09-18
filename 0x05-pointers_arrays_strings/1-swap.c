#include "main.h"

/**
 * swap_int - updates the value of the variable
 * the pointer points to to swap
 * @a: is a pointer
 * @b: is another pointer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a
	*a = *b;
	*b = c;
}
