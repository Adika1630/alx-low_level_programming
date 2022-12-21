#include "main.h"

/**
 * reverse_array - function tha reverse the content of an array of integers
 *
 * @a: pointer of array int
 * @n: the number of element to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *init, *final;
	int aux = 0;

	init = a;
	final = a;
	n--;
	while (i < n)
		i++;
	while (j <= i)
	{
		aux = init[j];
		init[j] = final[i];
		final[i] = aux;
		j++;
		i--;
	}
}
