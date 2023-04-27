#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print value of n is; zero, positive or negative
 *
 * Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
	/* the if statements */
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
