#include <stdio.h>
/**
 * main - is entry point
 *
 * Description: prints all alphabets exept e and q 
 *
 * Return: is always 0 (success)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
			++alphabet;
		putchar(alphabet);
		++alphabet;
	}
	putchar('\n');
	return (0);
}
