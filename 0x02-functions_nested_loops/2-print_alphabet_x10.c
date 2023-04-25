#include "main.h"
/**
 * print_alphabet_x10 - is entry point
 *
 * Description - prints alphabets x10
 *
 * Return - always 0
*/
void print_alphabet_x10(void)
{
	int num;
	int alph;

	for (num = 1; num <= 10; num++)
	{
		for (alph = 97; alph <= 122; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
