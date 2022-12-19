#include "main.h"

/**
 * puts2 - functions tha prints every other character
 *
 * @str: pointer to char
 * Return: nothin
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i = i + 1;
	}
	_putchar('\n');
}
