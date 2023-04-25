#include <stdio.h>
/**
 * main - is the enttry point
 *
 * Description: prints all possible different
 *             combinations of two digits
 *
 * Return: is always 0 (sucess)
*/
int main(void)
{
	int num1 = 0, num2;

	while (num2 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);

				if (num1 + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');

	return (0);
}
