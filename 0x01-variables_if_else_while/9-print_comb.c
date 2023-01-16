#include <stdio.h>

/**
 * main- prints all possible combination of numbers
 *
 * Description - A program that prints all possible combinations of
 * single-digit numbers
 *
 * Return: returns 0 on success
 */
int main(void)
{
	char number;


	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);

		if (number == '9')
		{
			break;
		}

		putchar(',');

		putchar (' ');
	}

	putchar('\n');

	return (0);
}

