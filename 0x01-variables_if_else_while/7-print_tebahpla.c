#include <stdio.h>
#include <stdlib.h>

/**
 *   main - print alphabet reverse
 *
 *   Description- A program that prints out the lowercase alphabet in reverse
 *   followed by a new line
 *
 *   Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
