#include <stdio.h>
#include <unistd.h>
/**
 * main - is the entry point
 *
 * Description: it prints a quote using the write function
 *
 * Return: return an erro 1
*/
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
