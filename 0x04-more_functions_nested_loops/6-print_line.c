#include "main.h"

/**
 * print_line - Print lines from given n
 *
 * @n: determine number of times
 * Return: 0
 */
void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
