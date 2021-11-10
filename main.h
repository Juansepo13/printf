#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct estructura - estructura
 *@espe: Prototipos y datos
 *@func: Funcion para imprimir caracteres
 */

typedef struct estructura
{
	char  *espe;
	int (*func)(va_list);
} estructura_t;

int _printf(const char *format, ...);
int _putchar (char c);
int (*get_especificador(const char *s))(va_list);
int printf_s(va_list s);
int printf_char(va_list c);
int printf_int(va_list mylista);
int printf_por(va_list __attribute__((unused))mylista);

#endif
