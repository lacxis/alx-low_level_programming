#include "main.h"
/**
 *_strchr- locates character in a given string
 *@s : first param
 *@c : second param
 *Return: character found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
