#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints sums
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, sum0 = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum0 += *(a + (size * i + i));
		sum1 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", sum0);
	printf("%d\n", sum1);
}
