#include <stdio.h>
/**
 * main - prints all  base 10 digit
 *
 * Description - A program that prints out single digits numbers of base 10
 * without a variable type character used
 *
 * Return: 0 on SUCCESS
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
