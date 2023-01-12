#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - outputs random number based on time and outputs its sign
 *
 * Description - A program that randomly outputs numbers based and time and
 * tells if the number is positive, negative or zero.
 *
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
