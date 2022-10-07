#include "main.h"
/**
 *_memset- prints the maching charater
 *@s :first param
 *@b :second param
 *@n :number of occurrence
 *Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	
	for (x = 0; x < n; x++; n--)
	{
		s[x] = b;
	}
	return (s);
}
