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
	int digitl = 0;
	int digit2, digit3;

	while (digitl <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			digit3 = 0;
			while (digit3 <= 9)
			{
				if (digit1 != digit2 &&
				digitl < digit2 &&
				digit2 != digit3 &&
				digit2 < digit3)
				{
					putchar(digit1 + 48);
					putchar(digit2 + 48);
					putchar(digit3 + 48);

					if (digitl + digit2 + digit3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}