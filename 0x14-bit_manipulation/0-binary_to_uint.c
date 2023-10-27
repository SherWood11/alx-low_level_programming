#include "main.h"
/**
* binary_to_uint - converts binary number to unsigned int
* @b: binary num as a string
*
* Return: the unsigned int of b
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int unt = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		unt = unt * 2 + (*b++ - '0');
		}
	}
	return (unt);
}
