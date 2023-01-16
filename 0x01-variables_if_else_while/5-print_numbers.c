#include <stdio.h>
#include <stdlib.h>

/**
 * main - lists numbers and exits
 *
 * Description - A program that lists base 10 numbers(0-9) followed by newline
 * using putchar using function
 *
 * Return: returns 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
