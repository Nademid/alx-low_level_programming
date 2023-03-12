#include <unistd.h>

/**
 * _putchar - write the character c to the stdout
 * @c: the character to print
 *
 * Return 1 on success
 * On error, -1
 */
int _putchar(char c)
{
	Return (write (1, &c, 1));
}
