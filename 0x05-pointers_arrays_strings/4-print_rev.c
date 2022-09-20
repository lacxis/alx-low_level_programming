#include "main.h"
/**
 * print_rev- reverse a given string
 * @str : string to be revered
 * Return: void
 */
void print_rev(char *str)
{
	int i, j, len;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
