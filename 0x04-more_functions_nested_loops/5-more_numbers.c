#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
 *
 * Return: 0 Always (success)
 */
void more_numbers(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
				_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
