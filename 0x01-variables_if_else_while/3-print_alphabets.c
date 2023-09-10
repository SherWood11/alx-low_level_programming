#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: True or False validation
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/* a to z */
	while (ch < 'z')
	{
		putchar(ch);
		ch++;
	}

	/* A to Z */
	while (CH < 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar ('\n')
		return (0);
}
