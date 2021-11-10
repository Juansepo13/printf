#include <stdio.h>
#include "main.h"
/**
 * printf_s - function print string
 * @s: lista
 * Return: (i)
 */
int printf_s(va_list s)
{
	int i = 0;
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
 * printf_char - function print string
 * @c: lista
 * Return: (1)
 */
int printf_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
