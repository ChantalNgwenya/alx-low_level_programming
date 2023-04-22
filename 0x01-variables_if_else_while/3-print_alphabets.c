#include <stdio.h>
/**
 * main - the entry point
 *
 * Description: prints all alphabets in lower and uppercase
 *
 * Return: Is always 0 (success)
*/
int main(void)
{
	int n = 97;
	char u  = 65;

	/* this prints a -z in lowercase*/
	while (n <= 122)
	{
		putchar(n);
		++n;
	}
	/*this prints A-Z in uppercase*/
	while (u <= 90)
	{
		putchar(u);
		++u;
	}
	putchar('\n');
	return (0);
}
