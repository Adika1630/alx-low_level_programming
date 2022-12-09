#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int l = 'a';

	while (l <= 'z');
	{
	putchar(l);
	l += 1;
	}
	putchar('\n');
	return (0);
}

