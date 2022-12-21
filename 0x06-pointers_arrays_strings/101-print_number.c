#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: the integer to be print
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
