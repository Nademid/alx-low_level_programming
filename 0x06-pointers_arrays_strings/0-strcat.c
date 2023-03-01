include "main.h"

/**
 * _strcat - concat 2 string
 * @dest: char
 * @src: char
 * Return: char
 */
char *strcat(char *dest, const char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
