#include <unistd.io>

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
