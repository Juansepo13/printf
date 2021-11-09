#include <stdio.h>
#include "main.h"
/**
 * print_s - function print string
 *@lista: lista
 */
int printf_s(lista char)  /** iba lista. se grego char, y se cambia void porint*/
{
	int i = 0;
	char *s = va_arg(lista, char *);
	/**puts(s);*/
	for ( i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);/** retiramos _de putchar*/
	}
	i++;
}
/**
4   * print_c - function print string
5   *@lista: lista
6   */
int printf_char(lista, char *c_format)
{
	putchar(va_arg(lista, int));/**fncion print c, se cambio _ del putchar*/
}
