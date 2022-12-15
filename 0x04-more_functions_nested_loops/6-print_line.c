#include "main.h"

/**
 * print_line - Print lines from given n
 *
 * @n: determine number of times
 * Return: 0
 */
void print_line(int n)
{
	int l;

	if (n >= 0)
	{
		for (l = 0; l <= n; l++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
}
