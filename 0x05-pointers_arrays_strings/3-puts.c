#include "main.h"

/**
 * _puts - functions that print a string
 *
 * @str: pointer to char
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putcharr(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
