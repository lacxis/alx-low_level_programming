#include <stdio.h>

/**
 * main- Print combinations of number
 *
 * Description - A program that prints out all possible different combinations
 * of three digits and the three digits must:
 * be different
 * print out in ascending order
 * start with the smallest combination of the three digits.
 *
 * * Return: return 0 on success
 */
int main(void)
{
	char left;
	char right;
	char center;



		for (left = '0'; left <= '7'; left++)
		{
			for (center = '1'; center <= '8'; center++)
			{
				for (right = '2' ; right <= '9'; right++)
				{
					putchar(left);
					putchar (center);
					putchar (right);

					if  (left != '7' || center != '8' || right != '9')
					{
						putchar(',');
						putchar (' ');

					}

				}

			}

		}

		putchar('\n');

		return (0);
}
