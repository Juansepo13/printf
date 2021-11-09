#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct - estructura
 *@estructura_t: Prototipos y datos
 *@func: Funcion para imprimir caracteres
 * Return: estructura
*/
va_list = lista
typedef struct estructura
{
	char  *espe;
	int (*func)(va_list);
}estructura_t;

int _printf(const char *format, ...);
int printf_s(va_list, char *c_format);
int printf_char(va_list, char *c_format);
int printf_dec(va_list, char *c_format);
int print_int(va_list, char *c_format);

#endif
