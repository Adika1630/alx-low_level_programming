#include "main.h"
/**
 * print_diagonal - print diagobal lines of a given number
 * @n: number of times character
 *
 * Return: 0 Always (success)
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
