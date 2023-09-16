#include "main.h"

/**
 * print_diagonal - print a digonal line
 *
 * @n: it is number of times should print
 *
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
		for (space = 1; space <= postn; space++)
		{
			_putchar(' ');
		_putchar(92); /*char '/'*/
		_putchar('\n');
		}

		}
	}
}
