#include <stdio.h>
/**
 * main - is an entry point
 *
 * Description: prints all the alphabet letters
 *
 * Return: Is always 0 (success)
*/
int main(void)
{
	int n = 97; 
	while (n <= 122)
	{
		putchar(n);
		++n;
	}
	putchar('\n');
	return (0);
}
