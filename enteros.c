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

	number = va_arg(mylista, int);
	cifras = coundig(number);



	if (number < 0)
	{
		cifras++;
	}
	if (number == 0)
	{
		cifras = 1;
	}
	print_number(number);
	return (cifras);
}
/**
 * coundig - count the number of digits
 * @number: entry number
 * Return: (cont)
 */
int coundig(int number)
{
	unsigned int i, cont = 0;

	(number < 0) ? (i = (number * (-1))) : (i = number);


	do {
		i /= 10;
		++cont;
	} while (i != 0);

		return (cont);
}
/**
 * print_number - print the number
 * @number: print the number
 */
void print_number(int number)/** se vuelve negativo otravez*/
{
	unsigned int nump;

	if (number < 0)
	{
		_putchar ('-');
		nump = -number;
	}
	else
	{
		nump = number;
	}
	if (number != 0)
	{
		if (nump / 10)
		{
			print_number(nump / 10);
		}
		_putchar ((nump % 10) + '0');
	}
	else
		_putchar (number + '0');
}
