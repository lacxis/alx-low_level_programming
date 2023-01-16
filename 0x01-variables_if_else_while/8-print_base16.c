#include <stdio.h>

/**
 * main - Print hexadecimal value
 *
 * Description - A program that prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: return 0 on success
 */

int main(void)
{
	char i;
	char chr;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (chr = 'a'; chr <= 'f'; chr++)
	{
		putchar(chr);
	}

	putchar('\n');
	return (0);
}
