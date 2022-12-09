#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (i = 0; i < 10; i++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
