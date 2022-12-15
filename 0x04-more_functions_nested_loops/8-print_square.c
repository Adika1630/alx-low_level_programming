#include "main.h"
/**
 * print_square - Print square of the given input
 *
 * @size: sixe of the square both width and length
 * Return: square of made of '#'
 */
void print_square(int size)
{
	int len, wid;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 0; len <= size; len++)
		{
			_putchar('#');
			for (wid = 2; wid <= size; wid++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
