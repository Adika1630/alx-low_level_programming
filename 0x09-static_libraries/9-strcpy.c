#include "main.h"

/**
 * _strcpy - functions tha copies a string
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
