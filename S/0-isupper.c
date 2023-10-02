#include "main.h"

/**
 * _isupper - check if c is uppercase or not
 *
 * Description for function: check if c is uppercase or if c is lowercase
 *
 * @c: input for alphabet char
 *
 * Return: 1 if its uppercase, 0 if not
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
