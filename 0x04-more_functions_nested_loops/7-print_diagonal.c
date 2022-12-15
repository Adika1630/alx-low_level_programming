#include "main.h"

/**
 * print_diagonal - Print diagonal line based on given n
 * @n: input value to check
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int co, sp;

	if (n > 0)
	{
		for (co = 1; co <= n; co++)
		{
			for (sp = 1; sp <= co; sp++)
			{
				if (sp != co)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
