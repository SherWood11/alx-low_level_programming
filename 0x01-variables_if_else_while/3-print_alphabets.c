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
	char lowch = 'a';
	char uppch = 'A';

	while (lowch < 'z')
	{
		putchar(lowch);
	}

	while (uppch < 'Z')
	{
		putchar(uppch);
	}
	putchar('\n')
}
