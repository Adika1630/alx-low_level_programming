#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet
 *
 * Return: Always o (success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("last digit of %d id %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit is %d is %d and is less thena 6 not 0\n", n, m);
	return (0);
}
