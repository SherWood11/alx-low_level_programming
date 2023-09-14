#include "main.h"
/*
 * Description: This is a test function for positive or negative value
 *
 * return (void) no return
 *
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
		printf("%d is zero\n", i);
	else 
		printf("%d is negative\n", i);
}
