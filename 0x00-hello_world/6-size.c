#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:  prints the size of various data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("char size: %lu bytes\n", sizeof(char));

	printf("int size: %lu bytes\n", sizeof(int));

	printf("long size: %lu bytes\n", sizeof(long));

	printf("long long: %lu bytes\n", sizeof(long long));

	printf("float size: %lu bytes\n", sizeof(float));

return (0);
}
