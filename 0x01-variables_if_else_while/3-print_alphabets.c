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

	while (lowch < 'z')
	{
		putchar(lowch);
	}

	char uppch = 'A';

	while (uppch < 'Z')
	{
		putchar(uppch);
	}
	putchar('\n')
}
