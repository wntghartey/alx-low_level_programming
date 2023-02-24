#include "main.h"

/**
 * print_numbers - prints an integer
 * @n: integer to be printed
 */

void print_numbers(void)
{
	unsigned int n1;

	if (n1 < 0)
	{
		n1 = -n;
		_putchar('_');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}	
