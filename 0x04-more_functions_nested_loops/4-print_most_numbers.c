#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9 exclude 2 and 4
 *
 * Return: 0 always (success)
 */
void print_most_numbers(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) && (i == 4))
		{
			continue;
		}
		else
		{
			_putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
