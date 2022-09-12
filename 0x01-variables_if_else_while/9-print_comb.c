#include <stdio.h>
/**
 *main- prints all possible combination of numbers
 *Return: 0 on SUCCESS
*/
int main(void)
{
	int number;


	for (number = 48; number <= 57; number++)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}

		putchar(',');
		putchar (' ');
	}

	putchar('\n');

	return (0);
}

