#include "main.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: The string to get the length of.
 *
 * Return: 0 is success
 */
int _strlen(char *s)
{

	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
