#include "main.h"
#include <stdio.h>
/**
 *main - A Program that prints "_putchar"
 * Return: 0 (success)
 */

int main(void)
{
	int c;
	char p[] = "_putchar";

	for (c = 0; c < 8; c++)
	{
		putchar(p[c]);
	}
	putchar('\n');
	return (0);
}
