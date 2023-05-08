#include "main.h"
/**
* _strstr - function locate
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	char *results = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (results);
		}
		needle = fneedle;
		results++;
		haystack = results;
	}
	return (0);
}
