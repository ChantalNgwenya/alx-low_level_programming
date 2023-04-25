#include "main.h"
/**
 * main - is an entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return:is  always 0 (Success)
*/
int main(void)
{
	char str[] = "_putchar";
	int n;

	for (n = 0; n < 8; ++n)
		_putchar(str[n]);
	_putchar('\n');

	return (0);
}
