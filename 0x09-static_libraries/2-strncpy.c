#include "main.h"

/**
 * _strncpy - function tha copies a string
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
