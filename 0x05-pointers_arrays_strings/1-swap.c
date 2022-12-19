#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
