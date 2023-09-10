#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all charcters from a to z in alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'A';

	while (ch < 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
