#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * coinhelper - gives the min # of coins needed to make change for n
 * @n: amount of cents / change
 *
 * Return: int min coins
 */
int coinhelper(int n)
{
	int coinnum = 0;

	while (n / 25 > 0)
	{
		coinnum++;
		n = n - 25;
	}
	while (n / 10 > 0)
	{
		coinnum++;
		n = n - 10;
	}
	while (n / 5 > 0)
	{
		coinnum++;
		n = n - 5;
	}
	while (n / 2 > 0)
	{
		coinnum++;
		n = n - 2;
	}
	while (n / 1 > 0)
	{
		coinnum++;
		n = n - 1;
	}
	return (coinnum);
}
/**
 * main - uses coinhelper to find the min # of coins
 * @argc: # of args
 * @argv: pointer to array of args
 *
 * Return: 0 success 1, error
 */
int main(int argc, char **argv)
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", coinhelper(cents));
	}
	return (0);
}
