#include "main.h"

/**
 * _strlen - return the length of a string
 * @str: The string to get the length of.
 *
 * Return: a 
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
