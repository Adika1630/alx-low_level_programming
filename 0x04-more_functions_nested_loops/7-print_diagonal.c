#include "main.h"
/**
 * print_diagonal - print diagobal lines of a given number
 * @n: number of times character
 *
 * Return: 0 Always (success)
 */
void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			for (sp = 1; sp <= co; sp++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		}
		_putchar('\n');
	}
}
