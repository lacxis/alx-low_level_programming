#include "main.h"
/**
 * _puts- print out charater
 * @str : pointer to the character variable
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
