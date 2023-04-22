#include <stdio.h>
/**
 * main - an entry point
 *
 * Description: prints digits 0-9 using putchar, while using the int variable
 *
 * Return: is always 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0'); /*this converts digits to ASCII representation*/
		++digit;
	}
	putchar('\n');
	return (0);
}
