<<<<<<< HEAD
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
=======
#include "main.h"
#include <unistd.h>

/**
 * _putchar - return the number of characters printed
 * @c: variable
 * Return: data
 */

>>>>>>> 7733b7eb635aaef343ce5ad8c94d7e2f3a419331
int _putchar(char c)
{
	return (write(1, &c, 1));
}
