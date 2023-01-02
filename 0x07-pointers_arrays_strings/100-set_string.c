#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: the value to modify
 * @to: the value to assign
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
