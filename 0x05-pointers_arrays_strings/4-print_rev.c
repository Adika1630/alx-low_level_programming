#include "main.h"

/**
 * print_rev - functions that prints a string in reverse
 * @s: string to print
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i = i + 1;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
