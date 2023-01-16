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
	int left;
	int right;
	int center;



		for (left = 48; left <= 57; left++)
		{
			for (center = left + 1; center <= 57; center++)
			{
				for (right = center + 1 ; right <= 57; right++)
				{
					putchar(left);
					putchar (center);
					putchar (right);

					if  ((left == 55) && (center == left + 1) && (right == center + 1))
					{
						break;
					}

					putchar(',');
					putchar (' ');

				}

			}

		}

		putchar('\n');

		return (0);
}
