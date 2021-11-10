#include "main.h"
#include <unistd.h>

/**
 * _putchar - return the number of characters printed
 * @c: variable
 * Return: data
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
