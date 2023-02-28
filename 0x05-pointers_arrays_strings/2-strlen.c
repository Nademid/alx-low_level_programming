#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
