#include <stdio.h>

/**
 * main - Prints all possible combinations of two 2 digit numbers
 *
 * Description - A program that prints out the possible combinations of two
 * two-digit numbers that range from 0 to 99 and the two numbers must:
 * Be separated by a space.
 * Should be printed with two digits like 00, 01
 * The combination of numbers separated by comma, followed by a space
 * Printed in an ascending order
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int first_nums;
	int second_nums;

	for (first_nums = 0; first_nums < 100; first_nums++)
	{
		for (second_nums = first_nums + 1; second_nums < 100; second_nums++)
		{
			putchar (first_nums / 10 + '0');
			putchar (first_nums % 10 + '0');
			putchar (' ');
			putchar (second_nums / 10 + '0');
			putchar (second_nums % 10 + '0');
			if (first_nums == 98 && second_nums == 99)
			{
				break;
			}
			putchar(',');
			putchar (' ');
		}

	}

	putchar('\n');
	return (0);

}

