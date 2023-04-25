#include "main.h"
/**
 * _islower - return 1 if c is lowercase,
 * else return 0
 *
 *@c - chara in ASCII code
 *
 * Return - 1 if its lowercase,
 * 0 if not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
