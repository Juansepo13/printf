#include "main.h"
#include <unistd.h>
/**
 * printf_int - the number of characters is saved
 * @mylista: argumentos
 * Return: 1
*/
int printf_int(va_list mylista)
{
	int number;
	int cifras;

	number = va_arg(mylista, int)
	cifras = coundig(number);
	print_number(number);
}
/**
 * coundig - count the number of digits
 * @number: entry number
 * Return: (cont)
*/
int coundig(int number)
{
	int cont = 0;

	if (number < 0)
	{
		number *= (-1);
	}
	else
	{
		while (number != 0)
		{
			number /= 10;
			cont++;
		}
	}
	return (cont);
}
/**
 * print_number - print the number
 * @number: print the number
 */
void print_number(int number)/** se vuelve negativo otravez*/
{
	int nump;

	if (number < 0)
	{
		_putchar ('-');
		nump = number * (-1);
	}
	else
	{
		nump = number;
	}
	if (number != 0)
	{
		if (nump / 10 != 0)
		{
			print_number(nump / 10);
		}
		_putchar ((nump % 10) + '0');
	}
	else
		_putchar (nump + '0');
}
