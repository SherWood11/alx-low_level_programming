#include "main.h"

/**
 * main - Entry point
 *
 * print_last_digit - prints the last digit of a number
 *
 * @n: var that the user will enter
 *
 * Return: lastdigit
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;
	_putchar(lastdigit + 48);
	return (lastdigit);
}
