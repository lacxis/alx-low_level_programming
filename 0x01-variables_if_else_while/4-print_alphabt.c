#include <stdio.h>
#include <stdlib.h>

/**
 * main - lists letters and exits
 *
 * Description - lists letters a-z (except for q and e) in lowercase followed
 * by newline
 *
 * Return: returns 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}

		putchar(ch);
	}

	putchar('\n');
	return (0);
}
