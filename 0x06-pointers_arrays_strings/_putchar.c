#include <unistd.h>
/**
 * _putchar- Prints a character to the console
 * @ch : Character to be printed
 * Return: 0 Always
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
