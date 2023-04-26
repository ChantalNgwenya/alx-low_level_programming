#include  "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Example 
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/
void times_table(void)
{
	int num, multi, produ;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48);
		for (multi = 1; multi <= 9; ++multi)
		{
			_putchar(',');
			_putchar(' ');

			produ = num * multi;

			/*
			 * put some space if product is a single num
			 * place the first digit if its two num
			*/
			if (produ <= 9)
				_putchar(' ');
			else
				_putchar((produ / 10) + 48); /*get the first digit*/

			_putchar((produ % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
