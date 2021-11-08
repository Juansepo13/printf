#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - return the number of characters printed
 * @format: pointer
 * @char: variable
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int  _printf(const char *format, ...)
{
	const char *c_format;
	va_list lista;
/**	char *str;*/
	int counter = 0;

	va_start(lista, format);
	c_format = format;

	while (*c_format != '\0')
	{
		if (*c_format == '%')
		{
			c_format++;
			if (*c_format == 's')
			{
				/**int i = 0;*/
				/**char *s = va_arg(lista, char *);*/
				/**puts(s);*/
				/**for ( i = 0; s[i] != '\0'; i++)
				{
					_putchar(s[i]);
				}
				i++;*/void print_s(lista)
			}
			else if (*c_format == 'c')
			{
				_putchar(va_arg(lista, int));/** funcion print caracter*/
			}
			else if (*c_format == '%')
			{
				_putchar('%');/** print el porcentaje*/
			}

	counter++;

		}
		else
		{
			_putchar(*c_format);
		}
		c_format++;
	}
	va_end (lista);
	return (counter);
}
