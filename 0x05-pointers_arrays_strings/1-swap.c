#include "main.h"
/**
 * swap_int- Swaps two integers variable
 * @a : First parameter
 * @b : Second parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
