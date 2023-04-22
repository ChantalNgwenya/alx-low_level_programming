#include <stdio.h>
/**
 * main - is an entry point
 *
 * Description: prints numbers of base16 in a lowwercase
 *
 * Return: its always a 0 (success)
*/
int main(void)
{
	int digit = 48;/*48; decimal representation of 0*/

	while (digit <= 102) /*102; is a decimal representation of f*/
	{
		putchar(digit);
		/*after 9 it will loop until 96; `*/
		if (digit == 57)
			digit = digit + 39;
		++digit;
	}
	putchar('\n');
	return (0);
}
