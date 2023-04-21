#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - is an entry point
 *
 * Description: prints a value of n ,where n is positive, zero or negative
 *
 * Return: Its always a 0 (success)
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX /2;
	/* My added code*/
	if (n>0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative", n);
	return (0);
}
