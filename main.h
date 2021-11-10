<<<<<<< HEAD
#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct printf_list - Structur
 *@b: indicator
 *@g: Function to call a pointer.
 */

typedef struct printf_list
{
	char *b;
	int (*g)(va_list);
} pl;

/* Write a function that produces output according to a format */
int _printf(const char *format, ...);
int prt_c(va_list);
int prt_s(va_list);
int prt_perc(va_list);
int prt_i(va_list);
int count_integer(long i);
int _putchar(char c);
int _strlen(char *s);
=======
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
int printf_dec(va_list, char *c_format);
int print_int(va_list, char *c_format);
>>>>>>> 7733b7eb635aaef343ce5ad8c94d7e2f3a419331

#endif
