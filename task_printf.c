#include "main.h"
/**
 * _printf - print the function
 * @format: incluye el contenido de los estring
 * Return: cantidad de caracteres
 */

int _printf(const char *format, ...)
{
	const char *c_format;/**retirmaos coma despues del c_format*/
	va_list = (lista);
	int (*func)(va_list);

	/** char *str;*/
	int counter;
	int iterator;
	*c_format = format;

	if (c_format == NULL)
	{
		return (-1);
	}
	va_start(lista, c_format);

	counter = 0;
	iterator = 0;
	while (c_format[iterator]!= '\0')
	{
		if (c_format[iterator] != '%')
			{
				_putchar(c_format[iterator]);
				iterator++;
				counter++;
				continue;
			}
		if (c_format[iterator + 1] == '\0')
		{
		return (-1);
		}
		func = get_especificador(c_format + iterator + 1);
		if (func != NULL)
		{
			counter = counter + func(lista);
			iterator++;
		}
		else
		{
			_putchar(c_format[iterator]);
			counter++;
		}
		iterator++;
	}
	va_end(lista);
	return (counter);
}
