#include <stdio.h>

/**
 * main - fibonacci number
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, m;

	j = 1;
	k = 2;
	m = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			m = m + j;
		}
		l = j + k;
		j = k;
		k = l;
	}
	printf("%lu\n", m);

	return (0);
}
