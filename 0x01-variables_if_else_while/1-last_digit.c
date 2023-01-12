#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - outputs random numbers and place them between 3 outputs.
 *
 * Description -  A program that outputs random digits and place the last value
 * of the digits between:
 * (a) greater than 5.
 * (b) equals to 0.
 * (c) less than 6 and is not 0.
 *
 * Return: returns 0
 */

int main(void)
{
	int n;
	int f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	f = n % 10;

	printf("Last digit of %d is %d ", n, f);

	if (f > 5)
	{
		printf("and is greater than 5\n");
	}

	else if (f == 0)
	{
		printf("and is 0\n");
	}
	else if (f < 6 && !(f == 0))
		printf("and is less than 6 and not 0\n");
	return (0);
}
