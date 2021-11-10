#include "main.h"
#include <unistd.h>


/**int printf_int(int mylista)
{
	int number;
	int cifras;
	number = mylista;
	cifras = coundig(number);
	print_number(number);
	}*/
int printf_int(va_list mylista)
{
	int number;
	int cifras;
	number = va_arg(mylista, int)
	cifras = coundig(number);
	print_number(number);
}
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
			cont ++;
		}
	}
	return (cont);
}
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
			print_number(nump /10);
		}
		_putchar ((nump % 10) + '0');
	}
	else
		_putchar (nump + '0');
}
