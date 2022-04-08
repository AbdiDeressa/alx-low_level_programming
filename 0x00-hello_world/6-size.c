#include <stdio.h>
/**
 *
 * Main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %d byte(s)\n",(unsigned long)Sizeof(d));
	printf("Size of an int: %d byte(s)\n",(unsigned long)sizeof(a));
	printf("size of a long int: %d byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of a long long int: %d byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of a float: %d bytes(s)\n",(unsigned long)sizeof(f));
	return (0);
