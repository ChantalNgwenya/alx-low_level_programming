#include <stdio.h>
/**
 * main - an entry point
 *
 * Description: print alphabets a-z in reverse
 *
 * Return: is always 0 (success)
*/
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		--alphabet;
	}
	putchar('\n');
	return (0);
}
