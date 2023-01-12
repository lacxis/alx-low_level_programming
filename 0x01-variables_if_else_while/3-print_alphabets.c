#include <stdio.h>
#include <stdlib.h>

/**
 * main - lists letters in lower case along with upper case and exits
 *
 * Description - A program that list out letters with lower case first
 * and later upper case and finishes with a new line.
 *
 * Return: returns 0
 */

int main(void)
{
	int ch;
	int ar;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ar = 'A'; ar <= 'Z'; ar++)
	{
		putchar(ar);
	}

	putchar('\n');

	return (0);
}
