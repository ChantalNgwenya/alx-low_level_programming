#include "main.h"
/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/
char *_strcat(char *dest, char *src)
{
	int a, a2;

	a = 0;
	/*find the size of dest array*/
	while (dest[a])
		a++;
	/* iterate through each src array value without the null byte*/
	for (a2 = 0; src[a2] ; a2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[a++] = src[a2];
	return (dest);
}
