#include "main.h"
/**
 *main - Program that prints "_putchar"
 * Return: Always 0 (success)
 */

int main(void)
{
	int c;
	char p[] = "_putchar";

	for (c = 0; c < 8; c++)
	{
		_putchar(p[c]);
	}
	_putchar('\n');
	return (0);
}
