#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the # of args passed to it
 * @argc: the # of args
 * @argv: the name of args
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
