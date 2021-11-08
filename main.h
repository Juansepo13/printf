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

#endif
