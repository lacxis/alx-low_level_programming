#include "main.h"

/**
 * _putchar - print a character
 * @ch : Charater to print
 * Return: ch
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
