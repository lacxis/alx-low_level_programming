#include <unistd.h>

/**
 * _putchar- writes to a file descriptor
 * @ch : Character to be written to.
 * Return: Always return 0
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
