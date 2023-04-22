#include <stdio.h>
/**
 * main - an entry point
 *
 * Description: it prints all single digit numbers
 *
 * Return: is always 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");
	return (0);
}
