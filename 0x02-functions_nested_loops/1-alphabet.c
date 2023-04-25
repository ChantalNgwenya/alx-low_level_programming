#include "main.h"
/**
 * print_alphabet - is the entry point
 *
 * Description -print alphabet in lowercase
 *
 * Return - always 0
*/
void print_alphabet(void)
{
	int v;

	for (v = 97; v <= 122; v++ )
	{
		_putchar(v);
	}
	_putchar('\n');
}
