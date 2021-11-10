#include "main.h"
/**
 * get_especificador - listado de especificadores
 * @s: pointer
 * Return: (NULL)
*/
int (*get_especificador(const char *s))(va_list)/** se qita int a*/
{
	estructura_t estructura_t2[] =	{
		{"c", printf_char},
		{"s", printf_s}, /** se cambio str a s**/
		/**{"d", printf_int},*/
		/**	{"i", printf_int},*/
		{NULL, NULL}
	};
	int a;

	for (a = 0; estructura_t2[a].espe != NULL; a++)
	{
		if (*s == *estructura_t2[a].espe)/** cambie le *s por s */
		{
			return (estructura_t2[a].func);
		}
		a++; /**se pone a++*/
	}
	return (NULL);
}
