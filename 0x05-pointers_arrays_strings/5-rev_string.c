#include "main.h"

/**
 * rev_string - functions tha reverse a string
 * @s: String reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char ltemp;

	while (*(s + i) != '\0')
		i = i + 1;
	i = i - 1;
	while (aux < i)
	{
		ltemp = s[i];
		s[i] = s[aux];
		s[aux] = ltemp;
		aux++;
		i--;
	}
}
