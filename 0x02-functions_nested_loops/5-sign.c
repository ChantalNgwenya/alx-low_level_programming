#include "main.h"
/**
 * print_sign - if n > 0 print +
 *      n = 0 print 0, n<0 print -
 *
 * @n : takes an input as interger
 *
 * Return- 1 if n >0, if n=0 ,-1 if n<0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 +0);
		return (-1);
	}
}
