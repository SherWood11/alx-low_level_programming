#include "main.h"
/**
 * print_line - print the line
 *
 * @n: is the number of chars
 *
 */

void print_line(int n)
{
	int lnchar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchar = 1; lnchar <= n; lnchar++)
			_putchar('_');
		_putchar("\n");
	}
}

