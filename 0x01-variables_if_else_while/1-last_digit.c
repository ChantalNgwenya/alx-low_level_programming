#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - is the entry point
 *
 * Description: prints the value of n - that is greater than zero, not 0 and less than 6, and is zero
 *
 * Return: its always 0 (success)
*/
int main(void)
{
	int n, digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My added code*/
	digit = n % 10; /*This gets the last digit*/
	if (digit > 5)
		printf("Last last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit ==0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}
