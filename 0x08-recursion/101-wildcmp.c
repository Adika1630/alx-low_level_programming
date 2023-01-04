#include "main.h"

/**
 * wildcmp - chacks two strings for match even if one is full of wildcards
 * @s1: one string
 * @s2: the string wiht *
 *
 * Return: 1 if match, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 && *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (!*s1 && !*s2)
		return (1);
	if (*s2 == '*')
	{
		if (*(s2 + 1) != *s1 && *(s2 + 1) != '*')
		{
			return (wildcmp(s1 + 1, s2));
		}
		else if (*(s2 + 1) != *s1 && *(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		if (!wildcmp(s1, s2 + 1))
			return (wildcmp(s1 + 1, s2));
		if (wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
