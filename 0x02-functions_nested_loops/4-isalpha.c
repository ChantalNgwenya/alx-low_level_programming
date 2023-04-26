#include "main.h"
/**
 * _isalpha - checks lower or upper
 *           cases of letter(s)
 *
 * @c : takes an input from function
 *
 * Return - shows 1 if truue and else 0
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && 
	    c >= 65 && c >= 90)
		return (1);
	return (0);
}
