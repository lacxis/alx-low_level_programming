#include <stdio.h>
#include <stdlib.h>

/**
 *   main - prints the alphabet in lowercase and in uppercase,
 *   followed by a new line
 *   Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	exit(EXIT_SUCCESS);
}
