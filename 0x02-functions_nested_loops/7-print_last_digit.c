#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * @n: the input number to check
 *
 * Return:the value of the last digit
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
