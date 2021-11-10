#include "main.h"
/**
 * _printf - print the function
 * @format: incluye el contenido de los estring
 * Return: cantidad de caracteres
 */
int _printf(const char *format, ...)
{
	va_list mylista;
	int (*func)(va_list);
	int counter = 0;
	int iterator = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(mylista, format);

	while (format[iterator] != '\0')
	{
		if (format[iterator] != '%')
		{
			_putchar(format[iterator]);
			iterator++;
			counter++;
			continue;
		}
		if (format[iterator + 1] == '\0')
		{
			return (-1);
		}
		func = get_especificador(format + iterator + 1);
		if (func != NULL)
		{
			counter = counter + func(mylista);
			iterator++;
		}
		else
		{
			_putchar(format[iterator]);
			counter++;
		}
		iterator++;
	}
	va_end(mylista);
	return (counter);
}
