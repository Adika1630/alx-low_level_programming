#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * wrdcnt - counts the number of words in a string
 * @s: string
 * Return: int of number of words
 */
int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, ch = 0;
	char **x;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	x = (char **)malloc(n * sizeof(char *));
	if (x == NULL)
		return (NULL);
	x[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			x[ch] = (char *)malloc(j * sizeof(char));
			j--;
			if (x[ch] == NULL)
			{
				for (k = 0; k < ch; k++)
					free(x[k]);
				free(x[n - 1]);
				free(x);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				x[ch][l] = str[i + l];
			x[ch][l] = '\0';
			ch++;
			i += j;
		}
		else
			i++;
	}
	return (x);
}
