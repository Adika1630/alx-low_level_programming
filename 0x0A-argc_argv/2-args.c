#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all argument
 * @argc: the # of args
 * @argv: the name of args
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
