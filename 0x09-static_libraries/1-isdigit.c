#include "main.h"
/**
 * _isdigit - Check for numbers or not
 * @c: entered character
 *
 * Return: 1 if c is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
