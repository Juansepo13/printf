#include "main.h"
/**
 * _printf - print the function
 * @format: incluye el contenido de los estring
 * Return: cantidad de caracteres
 */
int _printf(const char *format, ...)
{
	va_list mylista;
	int (*func)(va_list);/** se crea funcion puntero*/
	int counter = 0;
	int iterator = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(mylista, format);/**se pasan los datos de format a mylist*/

	while (format[iterator] != '\0') /** mi nimbre es %s" , dan*/

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
/*int i = 0;
11         char *str = va_arg(s, char *); str es un puntero pero no
12
13         if (str == NULL)
14         {
15                 str = "(null)";
16         }
17         for (i = 0; str[i] != '\0'; i++)
           {
                   _putchar(str[i]);
           }
           return (i); */

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
