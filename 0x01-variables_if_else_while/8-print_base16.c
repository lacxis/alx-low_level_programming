#include <stdio.h>
/**
 *main - Print hexadecimal value,
 *Return: 0 on SUCCESS
 */
int main(void)
{
	int i;
	char chr;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (chr = 'a'; chr < 'g'; chr++)
		putchar(chr);
	putchar('\n');
	return (0);
}
