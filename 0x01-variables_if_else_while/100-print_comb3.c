#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Description - A program that prints out all possible combinations of two
 * digits where:
 * the numbers are separated by a comma and space.
 * the two digits are different
 * and are printed in ascending order.
 * Return: Always 0 on success
 */
int main(void)
{
	char n, m;

	for (n = '0'; n <= '8'; n++)
	{
		for (m = '1'; m <= '9'; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);

				if (n != '8' || m != '9')
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
