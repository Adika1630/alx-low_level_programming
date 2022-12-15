#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: 0 Always (success)
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar((n % 10) + '0');
	}
}
