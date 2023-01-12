#include <stdio.h>
#include <stdlib.h>

/**
 * main - lists letters and exits
 *
 * Description -  A program that list all the alphabets in small letters and
 * end the program in a new line using putchar function.

 * Return: returns 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
