#include "main.h"

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 * Return: the string form character to find
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
