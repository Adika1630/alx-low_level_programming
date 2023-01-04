#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 *
 * Return: int length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(++s);
		return (len);
	}
	return (0);
}

/**
 * _compareends - checks for matches at either end of a str
 * @s: the string
 * @begin: the start
 * @end: the end
 * Return: 0 or 1
 */
int _compareends(char *s, int begin, int end)
{
	if (begin >= end)
		return (1);
	if (s[begin] == s[end])
		return (_compareends(s, (begin + 1), (end - 1)));
	if (s[begin] == s[end] && begin == end)
		return (1);
	return (0);
}

/**
 * is_palindrome - checking for palindrome
 * @s: the string
 *
 * Return: 1 if true, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || len == 1)
		return (1);
	else
		return (_compareends(s, 0, len - 1));
}
