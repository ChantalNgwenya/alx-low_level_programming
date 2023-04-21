#include <stdio.h>
/**
 * main - Is an entry point
 *
 * Description: using sizeof to print various type of size
 *
 * Return: always a 0 (Success)
*/
int main(void)
{
	/* the size of variables is evaluated by sizeof */
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
