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
	char lower_alpha = 'a';
	char upper_alpha = 'A';
	/* this prints a -z in lowercase*/
	while (lower_alpha <= 'z')
	{
		putchar(lower_alpha);
		++lowe_alpha;
	}
	/*this prints A-Z in uppercase*/
	while (upper_alpha <= 'Z')
	{
		putchar(upper_alpha);
		++upper_alpha;
	}
	putchar('\n');
	return (0);
}
