#include "main.h"
/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
*/
void print_to_98(int n)
{
	int counts;

	if (n > 98)
		for (counts = n; counts > 98; --counts)
			printf("%d, ", counts);
	else
		for (counts = n; counts < 98; ++counts)
			printf("%d, ", counts);
	printf("98\n");
}
