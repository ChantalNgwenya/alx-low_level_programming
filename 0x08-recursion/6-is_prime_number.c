#include "main.h"
int tmp_prime(int n, int i);
/**
 * divisor - number is prime
 * @n: integer para
 * @c: integer para
 * Return: boolean
 */
int divisor(int n, int c)
{
	if (c % n == 0)
	{
		return (0);
	}
	else if (c / 2 > n)
	{
		return (divisor(n + 2, c));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - prime
 * @n: integer para
 * Return: recursion
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisor(3, n));
	}
}
